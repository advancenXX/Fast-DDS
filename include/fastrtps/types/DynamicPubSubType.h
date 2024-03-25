// Copyright 2018 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

#ifndef TYPES_DYNAMIC_PUB_SUB_TYPE_H
#define TYPES_DYNAMIC_PUB_SUB_TYPE_H

#include <fastrtps/types/TypesBase.h>
#include <fastdds/dds/topic/TopicDataType.hpp>
#include <fastrtps/types/DynamicTypePtr.h>
#include <fastrtps/types/DynamicDataPtr.h>
#include <fastdds/utils/md5.h>

namespace eprosima {
namespace fastrtps {
namespace types {

class DynamicPubSubType : public eprosima::fastdds::dds::TopicDataType
{
protected:

    void UpdateDynamicTypeInfo();

    DynamicType_ptr dynamic_type_;
    MD5 m_md5;
    unsigned char* m_keyBuffer;

    enum
    {
        FINAL,
        APPENDABLE,
        MUTABLE
    }
    extensibility_ {APPENDABLE};

public:

    FASTDDS_EXPORTED_API DynamicPubSubType();

    FASTDDS_EXPORTED_API DynamicPubSubType(
            DynamicType_ptr pDynamicType);

    FASTDDS_EXPORTED_API virtual ~DynamicPubSubType();

    FASTDDS_EXPORTED_API void* createData() override;

    FASTDDS_EXPORTED_API void deleteData (
            void* data) override;

    FASTDDS_EXPORTED_API bool deserialize (
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            void* data) override;

    FASTDDS_EXPORTED_API bool getKey(
            void* data,
            eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
            bool force_md5 = false) override;

    FASTDDS_EXPORTED_API std::function<uint32_t()> getSerializedSizeProvider(
            void* data) override
    {
        return getSerializedSizeProvider(data, fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    FASTDDS_EXPORTED_API std::function<uint32_t()> getSerializedSizeProvider(
            void* data,
            fastdds::dds::DataRepresentationId_t data_representation) override;

    FASTDDS_EXPORTED_API bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override
    {
        return serialize(data, payload, fastdds::dds::DEFAULT_DATA_REPRESENTATION);
    }

    FASTDDS_EXPORTED_API bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            fastdds::dds::DataRepresentationId_t data_representation) override;

    FASTDDS_EXPORTED_API void CleanDynamicType();

    FASTDDS_EXPORTED_API DynamicType_ptr GetDynamicType() const;

    FASTDDS_EXPORTED_API ReturnCode_t SetDynamicType(
            DynamicData_ptr pData);

    FASTDDS_EXPORTED_API ReturnCode_t SetDynamicType(
            DynamicType_ptr pType);
};

} // namespace types
} // namespace fastrtps
} // namespace eprosima

#endif // TYPES_DYNAMIC_PUB_SUB_TYPE_H
