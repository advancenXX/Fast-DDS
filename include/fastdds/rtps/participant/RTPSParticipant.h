// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

/**
 * @file RTPSParticipant.h
 */

#ifndef _FASTDDS_RTPS_RTPSParticipant_H_
#define _FASTDDS_RTPS_RTPSParticipant_H_

#include <cstdint>
#include <cstdlib>
#include <memory>

#include <fastdds/dds/publisher/qos/WriterQos.hpp>
#include <fastdds/dds/subscriber/qos/ReaderQos.hpp>
#include <fastdds/rtps/attributes/RTPSParticipantAttributes.h>
#include <fastdds/rtps/builtin/data/ContentFilterProperty.hpp>
#include <fastdds/rtps/common/Guid.h>
#include <fastdds/statistics/IListeners.hpp>
#include <fastdds/fastdds_dll.hpp>

namespace eprosima {

#ifdef FASTDDS_STATISTICS

namespace fastdds {
namespace statistics {

class MonitorServiceStatusData;

namespace rtps {

struct IStatusQueryable;
struct IStatusObserver;

} // namespace rtps
} // namespace statistics
} // namespace fastdds

#endif //FASTDDS_STATISTICS

namespace fastrtps {

class TopicAttributes;

namespace rtps {

class RTPSParticipantImpl;
class RTPSParticipantListener;
class RTPSWriter;
class RTPSReader;
class WriterProxyData;
class ReaderProxyData;
class EndpointAttributes;
class WriterAttributes;
class ReaderAttributes;
class ResourceEvent;
class WLP;

/**
 * @brief Class RTPSParticipant, contains the public API for a RTPSParticipant.
 * @ingroup RTPS_MODULE
 */
class FASTDDS_EXPORTED_API RTPSParticipant
{
    friend class RTPSParticipantImpl;
    friend class RTPSDomain;
    friend class RTPSDomainImpl;

private:

    /**
     * Constructor. Requires a pointer to the implementation.
     * @param pimpl Implementation.
     */
    RTPSParticipant(
            RTPSParticipantImpl* pimpl);

    virtual ~RTPSParticipant();

public:

    //!Get the GUID_t of the RTPSParticipant.
    const GUID_t& getGuid() const;

    //!Force the announcement of the RTPSParticipant state.
    void announceRTPSParticipantState();

    //	//!Method to loose the next change (ONLY FOR TEST). //TODO remove this method because is only for testing
    //	void loose_next_change();

    //!Stop the RTPSParticipant announcement period. //TODO remove this method because is only for testing
    void stopRTPSParticipantAnnouncement();

    //!Reset the RTPSParticipant announcement period. //TODO remove this method because is only for testing
    void resetRTPSParticipantAnnouncement();

    /**
     * Indicate the Participant that you have discovered a new Remote Writer.
     * This method can be used by the user to implements its own Static Endpoint
     * Discovery Protocol
     * @param pguid GUID_t of the discovered Writer.
     * @param userDefinedId ID of the discovered Writer.
     * @return True if correctly added.
     */

    bool newRemoteWriterDiscovered(
            const GUID_t& pguid,
            int16_t userDefinedId);
    /**
     * Indicate the Participant that you have discovered a new Remote Reader.
     * This method can be used by the user to implements its own Static Endpoint
     * Discovery Protocol
     * @param pguid GUID_t of the discovered Reader.
     * @param userDefinedId ID of the discovered Reader.
     * @return True if correctly added.
     */
    bool newRemoteReaderDiscovered(
            const GUID_t& pguid,
            int16_t userDefinedId);

    /**
     * Get the Participant ID.
     * @return Participant ID.
     */
    uint32_t getRTPSParticipantID() const;

    /**
     * Register a RTPSWriter in the builtin Protocols.
     * @param Writer Pointer to the RTPSWriter.
     * @param topicAtt Topic Attributes where you want to register it.
     * @param wqos WriterQos.
     * @return True if correctly registered.
     */
    bool registerWriter(
            RTPSWriter* Writer,
            const TopicAttributes& topicAtt,
            const fastdds::dds::WriterQos& wqos);

    /**
     * Register a RTPSReader in the builtin Protocols.
     * @param Reader          Pointer to the RTPSReader.
     * @param topicAtt        Topic Attributes where you want to register it.
     * @param rqos            ReaderQos.
     * @param content_filter  Optional content filtering information.
     * @return True if correctly registered.
     */
    bool registerReader(
            RTPSReader* Reader,
            const TopicAttributes& topicAtt,
            const fastdds::dds::ReaderQos& rqos,
            const fastdds::rtps::ContentFilterProperty* content_filter = nullptr);

    /**
     * Update participant attributes.
     * @param patt New participant attributes.
     */
    void update_attributes(
            const RTPSParticipantAttributes& patt);

    /**
     * Update writer QOS
     * @param Writer to update
     * @param topicAtt Topic Attributes where you want to register it.
     * @param wqos New writer QoS
     * @return true on success
     */
    bool updateWriter(
            RTPSWriter* Writer,
            const TopicAttributes& topicAtt,
            const fastdds::dds::WriterQos& wqos);

    /**
     * Update reader QOS
     * @param Reader          Pointer to the RTPSReader to update
     * @param topicAtt        Topic Attributes where you want to register it.
     * @param rqos            New reader QoS
     * @param content_filter  Optional content filtering information.
     * @return true on success
     */
    bool updateReader(
            RTPSReader* Reader,
            const TopicAttributes& topicAtt,
            const fastdds::dds::ReaderQos& rqos,
            const fastdds::rtps::ContentFilterProperty* content_filter = nullptr);

    /**
     * Returns a list with the participant names.
     * @return list of participant names.
     */
    std::vector<std::string> getParticipantNames() const;

    /**
     * Get a copy of the actual state of the RTPSParticipantParameters
     * @return RTPSParticipantAttributes copy of the params.
     */
    const RTPSParticipantAttributes& getRTPSParticipantAttributes() const;

    /**
     * Retrieves the maximum message size.
     */
    uint32_t getMaxMessageSize() const;

    /**
     * Retrieves the maximum data size.
     */
    uint32_t getMaxDataSize() const;

    ResourceEvent& get_resource_event() const;

    /**
     * @brief A method to retrieve the built-in writer liveliness protocol
     * @return Writer liveliness protocol
     */
    WLP* wlp() const;

    /**
     * @brief Fills a new entityId if set to unknown, or checks if a entity already exists with that
     * entityId in other case.
     * @param entityId to check of fill. If filled, EntityKind will be "vendor-specific" (0x01)
     * @return True if filled or the entityId is available.
     */
    bool get_new_entity_id(
            EntityId_t& entityId);

    /**
     * Allows setting a function to check if a type is already known by the top level API participant.
     */
    void set_check_type_function(
            std::function<bool(const std::string&)>&& check_type);

    /**
     * @brief Modifies the participant listener
     * @param listener
     */
    void set_listener(
            RTPSParticipantListener* listener);

    /**
     * @brief Retrieves the DomainId.
     */
    uint32_t get_domain_id() const;

    /**
     * @brief This operation enables the RTPSParticipantImpl
     */
    void enable();

    /**
     * @brief Ignore all messages coming from the RTPSParticipant
     *
     * @param[in] participant_guid RTPSParticipant GUID to be ignored
     * @return True if correctly included into the ignore collection. False otherwise.
     */
    bool ignore_participant(
            const GuidPrefix_t& participant_guid);

    /**
     * @brief Ignore all messages coming from the RTPSWriter
     *
     * @param[in] writer_guid RTPSWriter GUID to be ignored
     * @return True if correctly included into the ignore collection. False otherwise.
     */
    bool ignore_writer(
            const GUID_t& writer_guid);

    /**
     * @brief Ignore all messages coming from the RTPSReader
     *
     * @param[in] reader_guid RTPSReader GUID to be ignored
     * @return True if correctly included into the ignore collection. False otherwise.
     */
    bool ignore_reader(
            const GUID_t& reader_guid);

    /**
     * @brief Returns registered transports' netmask filter information (transport's netmask filter kind and allowlist).
     *
     * @return A vector with all registered transports' netmask filter information.
     */
    std::vector<fastdds::rtps::TransportNetmaskFilterInfo> get_netmask_filter_info() const;

#if HAVE_SECURITY

    /**
     * @brief Checks whether the writer has security attributes enabled
     * @param writer_attributes Attributes of the writer as given to the RTPSParticipantImpl::create_writer
     */

    bool is_security_enabled_for_writer(
            const WriterAttributes& writer_attributes);

    /**
     * @brief Checks whether the reader has security attributes enabled
     * @param reader_attributes Attributes of the reader as given to the RTPSParticipantImpl::create_reader
     */

    bool is_security_enabled_for_reader(
            const ReaderAttributes& reader_attributes);

#endif // if HAVE_SECURITY

#ifdef FASTDDS_STATISTICS

    /**
     * Add a listener to receive statistics backend callbacks
     * @param listener
     * @param kind combination of fastdds::statistics::EventKind flags used as a mask. Events to notify.
     * @return true if successfully added
     */
    bool add_statistics_listener(
            std::shared_ptr<fastdds::statistics::IListener> listener,
            uint32_t kind);

    /**
     * Remove a listener from receiving statistics backend callbacks
     * @param listener
     * @param kind combination of fastdds::statistics::EventKind flags used as a mask. Events to ignore.
     * @return true if successfully removed
     */
    bool remove_statistics_listener(
            std::shared_ptr<fastdds::statistics::IListener> listener,
            uint32_t kind);

    /**
     * @brief Set the enabled statistics writers mask
     *
     * @param enabled_writers The new mask to set
     */
    void set_enabled_statistics_writers_mask(
            uint32_t enabled_writers);

    /**
     * Creates the monitor service in this RTPSParticipant with the provided interfaces.
     *
     * @param sq reference to the object implementing the StatusQueryable interface.
     * It will usually be the DDS DomainParticipant
     *
     * @return A const pointer to the listener (implemented within the RTPSParticipant)
     *
     * @note Not supported yet. Currently always returns nullptr
     */
    const fastdds::statistics::rtps::IStatusObserver* create_monitor_service(
            fastdds::statistics::rtps::IStatusQueryable& status_queryable);

    /**
     * Creates the monitor service in this RTPSParticipant with a simple default
     * implementation of the IStatusQueryable.
     *
     * @return true if the monitor service could be correctly created.
     *
     * @note Not supported yet. Currently always returns false
     */
    bool create_monitor_service();

    /**
     * Returns whether the monitor service in created in this RTPSParticipant.
     *
     * @return true if the monitor service is created.
     * @return false otherwise.
     *
     * @note Not supported yet. Currently always returns false
     */
    bool is_monitor_service_created() const;

    /**
     * Enables the monitor service in this RTPSParticipant.
     *
     * @return true if the monitor service could be correctly enabled.
     *
     * @note Not supported yet. Currently always returns false
     */
    bool enable_monitor_service() const;

    /**
     * Disables the monitor service in this RTPSParticipant. Does nothing if the service was not enabled before.
     *
     * @return true if the monitor service could be correctly disabled.
     * @return false if the service could not be properly disabled or if the monitor service was not previously enabled.
     *
     * @note Not supported yet. Currently always returns false
     */
    bool disable_monitor_service() const;

    /**
     * fills in the ParticipantProxyData from a MonitorService Message
     *
     * @param [out] data Proxy to fill
     * @param [in] msg MonitorService Message to get the proxy information from.
     *
     * @return true if the operation succeeds.
     */
    bool fill_discovery_data_from_cdr_message(
            fastrtps::rtps::ParticipantProxyData& data,
            fastdds::statistics::MonitorServiceStatusData& msg);

    /**
     * fills in the WriterProxyData from a MonitorService Message
     *
     * @param [out] data Proxy to fill.
     * @param [in] msg MonitorService Message to get the proxy information from.
     *
     * @return true if the operation succeeds.
     */
    bool fill_discovery_data_from_cdr_message(
            fastrtps::rtps::WriterProxyData& data,
            fastdds::statistics::MonitorServiceStatusData& msg);

    /**
     * fills in the ReaderProxyData from a MonitorService Message
     *
     * @param [out] data Proxy to fill.
     * @param [in] msg MonitorService Message to get the proxy information from.
     *
     * @return true if the operation succeeds.
     */
    bool fill_discovery_data_from_cdr_message(
            fastrtps::rtps::ReaderProxyData& data,
            fastdds::statistics::MonitorServiceStatusData& msg);

#endif // FASTDDS_STATISTICS

protected:

    //!Pointer to the implementation.
    RTPSParticipantImpl* mp_impl;

};

} // namespace rtps
} /* namespace rtps */
} /* namespace eprosima */

#endif /* _FASTDDS_RTPS_RTPSParticipant_H_ */
