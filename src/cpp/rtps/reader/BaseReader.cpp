// Copyright 2024 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*
 * BaseReader.cpp
 */

#include <rtps/reader/BaseReader.hpp>

#include <fastdds/dds/log/Log.hpp>
#include <fastdds/rtps/builtin/data/WriterProxyData.h>
#include <fastdds/rtps/reader/RTPSReader.h>

#include <rtps/DataSharing/DataSharingListener.hpp>
#include <rtps/DataSharing/DataSharingNotification.hpp>
#include <rtps/reader/ReaderHistoryState.hpp>
#include <statistics/rtps/StatisticsBase.hpp>

namespace eprosima {
namespace fastdds {
namespace rtps {

BaseReader::BaseReader(
        fastrtps::rtps::RTPSParticipantImpl* pimpl,
        const fastrtps::rtps::GUID_t& guid,
        const fastrtps::rtps::ReaderAttributes& att,
        fastrtps::rtps::ReaderHistory* hist,
        fastrtps::rtps::ReaderListener* listen)
    : fastrtps::rtps::RTPSReader(pimpl, guid, att, hist, listen)
    , history_state_(new fastrtps::rtps::ReaderHistoryState(att.matched_writers_allocation.initial))
    , liveliness_kind_(att.liveliness_kind_)
    , liveliness_lease_duration_(att.liveliness_lease_duration)
{
    setup_datasharing(att);
}

BaseReader::BaseReader(
        fastrtps::rtps::RTPSParticipantImpl* pimpl,
        const fastrtps::rtps::GUID_t& guid,
        const fastrtps::rtps::ReaderAttributes& att,
        const std::shared_ptr<fastrtps::rtps::IPayloadPool>& payload_pool,
        fastrtps::rtps::ReaderHistory* hist,
        fastrtps::rtps::ReaderListener* listen)
    : fastrtps::rtps::RTPSReader(pimpl, guid, att, payload_pool, hist, listen)
    , history_state_(new fastrtps::rtps::ReaderHistoryState(att.matched_writers_allocation.initial))
    , liveliness_kind_(att.liveliness_kind_)
    , liveliness_lease_duration_(att.liveliness_lease_duration)
{
    setup_datasharing(att);
}

BaseReader::BaseReader(
        fastrtps::rtps::RTPSParticipantImpl* pimpl,
        const fastrtps::rtps::GUID_t& guid,
        const fastrtps::rtps::ReaderAttributes& att,
        const std::shared_ptr<fastrtps::rtps::IPayloadPool>& payload_pool,
        const std::shared_ptr<fastrtps::rtps::IChangePool>& change_pool,
        fastrtps::rtps::ReaderHistory* hist,
        fastrtps::rtps::ReaderListener* listen)
    : fastrtps::rtps::RTPSReader(pimpl, guid, att, payload_pool, change_pool, hist, listen)
    , history_state_(new fastrtps::rtps::ReaderHistoryState(att.matched_writers_allocation.initial))
    , liveliness_kind_(att.liveliness_kind_)
    , liveliness_lease_duration_(att.liveliness_lease_duration)
{
    setup_datasharing(att);
}

BaseReader::~BaseReader()
{
    EPROSIMA_LOG_INFO(RTPS_READER, "Removing reader " << this->getGuid().entityId);

    for (auto it = mp_history->changesBegin(); it != mp_history->changesEnd(); ++it)
    {
        releaseCache(*it);
    }

    delete history_state_;
}

uint64_t BaseReader::get_unread_count() const
{
    std::unique_lock<decltype(mp_mutex)> lock(mp_mutex);
    return total_unread_;
}

uint64_t BaseReader::get_unread_count(
        bool mark_as_read)
{
    std::unique_lock<decltype(mp_mutex)> lock(mp_mutex);
    uint64_t ret_val = total_unread_;

    if (mark_as_read)
    {
        for (auto it = mp_history->changesBegin(); 0 < total_unread_ && it != mp_history->changesEnd(); ++it)
        {
            fastrtps::rtps::CacheChange_t* change = *it;
            if (!change->isRead && get_last_notified(change->writerGUID) >= change->sequenceNumber)
            {
                change->isRead = true;
                assert(0 < total_unread_);
                --total_unread_;
            }
        }
        assert(0 == total_unread_);
    }
    return ret_val;
}

bool BaseReader::wait_for_unread_cache(
        const eprosima::fastrtps::Duration_t& timeout)
{
    auto time_out = std::chrono::steady_clock::now() + std::chrono::seconds(timeout.seconds) +
            std::chrono::nanoseconds(timeout.nanosec);

#if HAVE_STRICT_REALTIME
    std::unique_lock<decltype(mp_mutex)> lock(mp_mutex, std::defer_lock);
    if (lock.try_lock_until(time_out))
#else
    std::unique_lock<decltype(mp_mutex)> lock(mp_mutex);
#endif  // HAVE_STRICT_REALTIME
    {
        if (new_notification_cv_.wait_until(
                    lock, time_out,
                    [&]()
                    {
                        return total_unread_ > 0;
                    }))
        {
            return true;
        }
    }

    return false;
}

#ifdef FASTDDS_STATISTICS

bool BaseReader::add_statistics_listener(
        std::shared_ptr<fastdds::statistics::IListener> listener)
{
    return add_statistics_listener_impl(listener);
}

bool BaseReader::remove_statistics_listener(
        std::shared_ptr<fastdds::statistics::IListener> listener)
{
    return remove_statistics_listener_impl(listener);
}

void BaseReader::set_enabled_statistics_writers_mask(
        uint32_t enabled_writers)
{
    set_enabled_statistics_writers_mask_impl(enabled_writers);
}

#endif // FASTDDS_STATISTICS

bool BaseReader::may_remove_history_record(
        bool removed_by_lease)
{
    return !removed_by_lease;
}

void BaseReader::add_persistence_guid(
        const fastrtps::rtps::GUID_t& guid,
        const fastrtps::rtps::GUID_t& persistence_guid)
{
    if (fastrtps::rtps::c_Guid_Unknown == persistence_guid || persistence_guid == guid)
    {
        std::lock_guard<decltype(mp_mutex)> guard(mp_mutex);
        history_state_->persistence_guid_map[guid] = guid;
        history_state_->persistence_guid_count[guid]++;
    }
    else
    {
        std::lock_guard<decltype(mp_mutex)> guard(mp_mutex);
        history_state_->persistence_guid_map[guid] = persistence_guid;
        history_state_->persistence_guid_count[persistence_guid]++;

        // Could happen that a value has already been stored in the record with the guid and not the persistence guid
        // This is because received_change is called before Proxy is created
        // In this case, we substitute the guid for the persistence (in case they are not equal)
        auto spourious_record = history_state_->history_record.find(guid);
        if (spourious_record != history_state_->history_record.end())
        {
            EPROSIMA_LOG_INFO(RTPS_READER, "Sporious record found, changing guid "
                    << guid << " for persistence guid " << persistence_guid);
            update_last_notified(guid, spourious_record->second);
            history_state_->history_record.erase(spourious_record);
        }
    }
}

void BaseReader::remove_persistence_guid(
        const fastrtps::rtps::GUID_t& guid,
        const fastrtps::rtps::GUID_t& persistence_guid,
        bool removed_by_lease)
{
    std::lock_guard<decltype(mp_mutex)> guard(mp_mutex);
    auto persistence_guid_stored = (fastrtps::rtps::c_Guid_Unknown == persistence_guid) ? guid : persistence_guid;
    history_state_->persistence_guid_map.erase(guid);
    auto count = --history_state_->persistence_guid_count[persistence_guid_stored];
    if (count <= 0 && may_remove_history_record(removed_by_lease))
    {
        history_state_->history_record.erase(persistence_guid_stored);
        history_state_->persistence_guid_count.erase(persistence_guid_stored);
    }
}

fastrtps::rtps::SequenceNumber_t BaseReader::get_last_notified(
        const fastrtps::rtps::GUID_t& guid)
{
    fastrtps::rtps::SequenceNumber_t ret_val;
    std::lock_guard<decltype(mp_mutex)> guard(mp_mutex);
    fastrtps::rtps::GUID_t guid_to_look = guid;
    auto p_guid = history_state_->persistence_guid_map.find(guid);
    if (p_guid != history_state_->persistence_guid_map.end())
    {
        guid_to_look = p_guid->second;
    }

    auto p_seq = history_state_->history_record.find(guid_to_look);
    if (p_seq != history_state_->history_record.end())
    {
        ret_val = p_seq->second;
    }

    return ret_val;
}

fastrtps::rtps::SequenceNumber_t BaseReader::update_last_notified(
        const fastrtps::rtps::GUID_t& guid,
        const fastrtps::rtps::SequenceNumber_t& seq)
{
    fastrtps::rtps::SequenceNumber_t ret_val;
    std::lock_guard<decltype(mp_mutex)> guard(mp_mutex);
    fastrtps::rtps::GUID_t guid_to_look = guid;
    auto p_guid = history_state_->persistence_guid_map.find(guid);
    if (p_guid != history_state_->persistence_guid_map.end())
    {
        guid_to_look = p_guid->second;
    }

    auto p_seq = history_state_->history_record.find(guid_to_look);
    if (p_seq != history_state_->history_record.end())
    {
        ret_val = p_seq->second;
    }

    if (ret_val < seq)
    {
        set_last_notified(guid_to_look, seq);
        new_notification_cv_.notify_all();
    }

    return ret_val;
}

void BaseReader::set_last_notified(
        const fastrtps::rtps::GUID_t& peristence_guid,
        const fastrtps::rtps::SequenceNumber_t& seq)
{
    history_state_->history_record[peristence_guid] = seq;
}

fastrtps::rtps::History::const_iterator BaseReader::findCacheInFragmentedProcess(
        const fastrtps::rtps::SequenceNumber_t& sequence_number,
        const fastrtps::rtps::GUID_t& writer_guid,
        fastrtps::rtps::CacheChange_t** change,
        fastrtps::rtps::History::const_iterator hint) const
{
    fastrtps::rtps::History::const_iterator ret_val = mp_history->get_change_nts(sequence_number, writer_guid, change, hint);

    if (nullptr != *change && (*change)->is_fully_assembled())
    {
        *change = nullptr;
    }

    return ret_val;
}

bool BaseReader::is_datasharing_compatible_with(
        const fastrtps::rtps::WriterProxyData& wdata)
{
    if (!is_datasharing_compatible_ ||
            wdata.m_qos.data_sharing.kind() == fastdds::dds::OFF)
    {
        return false;
    }

    for (auto id : wdata.m_qos.data_sharing.domain_ids())
    {
        if (std::find(m_att.data_sharing_configuration().domain_ids().begin(),
                m_att.data_sharing_configuration().domain_ids().end(), id)
                != m_att.data_sharing_configuration().domain_ids().end())
        {
            return true;
        }
    }

    return false;
}

void BaseReader::setup_datasharing(
        const fastrtps::rtps::ReaderAttributes& att)
{
    using namespace fastrtps::rtps;

    if (att.endpoint.data_sharing_configuration().kind() != fastdds::dds::DataSharingKind::OFF)
    {
        using std::placeholders::_1;
        std::shared_ptr<DataSharingNotification> notification =
            DataSharingNotification::create_notification(
                getGuid(), att.endpoint.data_sharing_configuration().shm_directory());
        if (notification)
        {
            is_datasharing_compatible_ = true;
            datasharing_listener_.reset(new DataSharingListener(
                notification,
                att.endpoint.data_sharing_configuration().shm_directory(),
                att.data_sharing_listener_thread,
                att.matched_writers_allocation,
                this));

            // We can start the listener here, as no writer can be matched already,
            // so no notification will occur until the non-virtual instance is constructed.
            // But we need to stop the listener in the non-virtual instance destructor.
            datasharing_listener_->start();
        }
    }
}

}  // namespace rtps
}  // namespace fastdds
}  // namespace eprosima
