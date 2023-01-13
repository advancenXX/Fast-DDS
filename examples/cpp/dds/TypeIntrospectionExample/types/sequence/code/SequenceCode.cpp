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
 * @file SequenceCode.cpp
 *
 */

#include <fastrtps/types/DynamicDataPtr.h>
#include <fastrtps/types/DynamicDataFactory.h>
#include <fastrtps/types/DynamicTypeBuilderFactory.h>
#include <fastrtps/types/DynamicTypeBuilderPtr.h>

#include "../../types.hpp"

using namespace eprosima::fastrtps;

template <>
eprosima::fastrtps::types::DynamicType_ptr
    DataType<DataTypeKind::SEQUENCE , GeneratorKind::CODE>::generate_type_() const
{
    // Tmp variable to avoid calling get_instance many times
    types::DynamicTypeBuilderFactory *builder_factory =
        types::DynamicTypeBuilderFactory::get_instance();

    /////
    // Sequence internal data structure
    types::DynamicTypeBuilder_ptr sequence_builder =
        types::DynamicTypeBuilderFactory::get_instance()->create_sequence_builder(
            builder_factory->create_int32_type(),
            {3});

    /////
    // Base structure
    types::DynamicTypeBuilder_ptr builder = builder_factory->create_struct_builder();
    builder->add_member(0, "index", builder_factory->create_uint32_type());
    builder->add_member(1, "points", sequence_builder->build());

    // Set name
    builder->set_name(SEQUENCE_DATA_TYPE_NAME);

    // Create Dynamic type
    types::DynamicType_ptr dyn_type = builder->build();

    return dyn_type;
}
