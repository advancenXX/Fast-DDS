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
 * @file StatelessReader.hpp
 */

#ifndef RTPS_READER__STATELESSREADER_HPP
#define RTPS_READER__STATELESSREADER_HPP

#include <fastdds/rtps/reader/RTPSReader.h>

namespace eprosima {
namespace fastdds {
namespace rtps {

class StatelessReader : public RTPSReader
{
public:

    StatelessReader() = default;

    StatelessReader(
            ReaderHistory* history,
            RecursiveTimedMutex* mutex)
        : RTPSReader(history, mutex)
    {
    }

    virtual ~StatelessReader() = default;

    MOCK_METHOD1(matched_writer_add, bool(const WriterProxyData&));

    MOCK_METHOD2(matched_writer_remove, bool(const GUID_t&, bool));

    MOCK_METHOD1 (matched_writer_is_matched, bool(const GUID_t& writer_guid));

};

} // namespace rtps
} // namespace fastdds
} // namespace eprosima

#endif // RTPS_READER__STATELESSREADER_HPP
