// Copyright 2022 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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
 * @file HelloWorldGen.cpp
 *
 */

#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/xtypes/dynamic_types/DynamicPubSubType.hpp>
#include <fastdds/dds/xtypes/dynamic_types/DynamicTypeBuilder.hpp>
#include <fastdds/dds/xtypes/dynamic_types/DynamicTypeBuilderFactory.hpp>
#include <fastdds/dds/xtypes/type_representation/detail/dds_xtypes_typeobject.hpp>

#include "../../types.hpp"
#include "HelloWorldPubSubTypes.h"
#include "HelloWorldTypeObjectSupport.hpp"

using namespace eprosima::fastdds::dds;

template <>
void
DataType<DataTypeKind::HELLO_WORLD, GeneratorKind::GEN>::generate_type_support_()
{
    type_support_.reset(new HelloWorld_TypeIntrospectionExamplePubSubType());
}

template <>
void
DataType<DataTypeKind::HELLO_WORLD, GeneratorKind::GEN_DYN>::generate_type_support_()
{
    // Register using method from Fast DDS Gen autogenerated code
    register_HelloWorld_type_objects();

    xtypes::TypeObjectPair type_object_pair;
    if (RETCODE_OK != DomainParticipantFactory::get_instance()->type_object_registry().get_type_objects(
                HELLO_WORLD_DATA_TYPE_NAME, type_object_pair))

    {
        std::cout << "ERROR" << std::endl;
        return;
    }

    // Create DynamicType
    auto type_builder = DynamicTypeBuilderFactory::get_instance()->create_type_w_type_object(type_object_pair.complete_type_object);
    traits<DynamicType>::ref_type dynamic_type = type_builder->build();

    type_support_.reset(new DynamicPubSubType(dynamic_type));
}
