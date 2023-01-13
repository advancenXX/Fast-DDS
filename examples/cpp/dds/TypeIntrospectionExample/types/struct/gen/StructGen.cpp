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
 * @file StructGenDataType.cpp
 *
 */

#include <fastrtps/types/DynamicDataPtr.h>
#include <fastrtps/types/TypeObjectFactory.h>

#include "../../types.hpp"
#include "StructTypeObject.h"

using namespace eprosima::fastrtps;

template <>
eprosima::fastrtps::types::DynamicType_ptr
    DataType<DataTypeKind::STRUCT , GeneratorKind::GEN>::generate_type_() const
{
    // Register using method from Fast DDS Gen autogenerated code
    registerStructTypes();

    auto type_object = GetStruct_TypeIntrospectionExampleObject(true);
    auto type_id = GetStruct_TypeIntrospectionExampleIdentifier(true);

    return eprosima::fastrtps::types::TypeObjectFactory::get_instance()->build_dynamic_type(
            name(),
            type_id,
            type_object);
}