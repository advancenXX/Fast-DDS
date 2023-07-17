// Copyright 2023 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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
 * @file MonitorServiceListener.cpp
 */

#include <statistics/rtps/monitor-service/MonitorServiceListener.hpp>

namespace eprosima {
namespace fastdds {
namespace statistics {
namespace rtps {

MonitorServiceListener::MonitorServiceListener(
        MonitorService* ms)
    : monitor_srv_(ms)
{
    //! TODO
    static_cast<void>(monitor_srv_);
}

bool MonitorServiceListener::on_local_entity_status_change(
        const fastrtps::rtps::GUID_t& guid,
        const uint32_t& id)
{
    //! TODO
    static_cast<void>(guid);
    static_cast<void>(id);
    return false;
}

bool MonitorServiceListener::on_local_entity_change(
        const fastrtps::rtps::GUID_t& guid,
        bool is_alive)
{
    //! TODO
    static_cast<void>(guid);
    static_cast<void>(is_alive);
    return false;
}

bool MonitorServiceListener::on_local_entity_connections_change(
        const fastrtps::rtps::GUID_t& guid)
{
    //! TODO
    static_cast<void>(guid);
    return false;
}

} // namespace rtps
} // namespace statistics
} // namespace fastdds
} // namespace eprosima