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

/*!
 * @file KeyTypeObject.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool fastddsgen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "Key.h"
#include "KeyTypeObject.h"
#include <mutex>
#include <utility>
#include <sstream>
#include <fastdds/rtps/common/CdrSerialization.hpp>
#include <fastrtps/rtps/common/SerializedPayload.h>
#include <fastrtps/utils/md5.h>
#include <fastrtps/types/TypeObjectFactory.h>
#include <fastrtps/types/TypeNamesGenerator.h>
#include <fastrtps/types/AnnotationParameterValue.h>

using namespace eprosima::fastrtps::rtps;

void registerKeyTypes()
{
    static std::once_flag once_flag;
    std::call_once(once_flag, []()
            {
                TypeObjectFactory *factory = TypeObjectFactory::get_instance();
                factory->add_type_object("Key_TypeIntrospectionExample", GetKey_TypeIntrospectionExampleIdentifier(true),
                GetKey_TypeIntrospectionExampleObject(true));
                factory->add_type_object("Key_TypeIntrospectionExample", GetKey_TypeIntrospectionExampleIdentifier(false),
                GetKey_TypeIntrospectionExampleObject(false));

            });
}



const TypeIdentifier* GetKey_TypeIntrospectionExampleIdentifier(bool complete)
{
    const TypeIdentifier * c_identifier = TypeObjectFactory::get_instance()->get_type_identifier("Key_TypeIntrospectionExample", complete);
    if (c_identifier != nullptr && (!complete || c_identifier->_d() == EK_COMPLETE))
    {
        return c_identifier;
    }

    GetKey_TypeIntrospectionExampleObject(complete); // Generated inside
    return TypeObjectFactory::get_instance()->get_type_identifier("Key_TypeIntrospectionExample", complete);
}

const TypeObject* GetKey_TypeIntrospectionExampleObject(bool complete)
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("Key_TypeIntrospectionExample", complete);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }
    else if (complete)
    {
        return GetCompleteKey_TypeIntrospectionExampleObject();
    }
    //else
    return GetMinimalKey_TypeIntrospectionExampleObject();
}

const TypeObject* GetMinimalKey_TypeIntrospectionExampleObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("Key_TypeIntrospectionExample", false);
    if (c_type_object != nullptr)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_MINIMAL);
    type_object->minimal()._d(TK_STRUCTURE);

    type_object->minimal().struct_type().struct_flags().IS_FINAL(false);
    type_object->minimal().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->minimal().struct_type().struct_flags().IS_NESTED(false);
    type_object->minimal().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

    MemberId memberId = 0;
    MinimalStructMember mst_instance_key;
    mst_instance_key.common().member_id(memberId++);
    mst_instance_key.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_instance_key.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_instance_key.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_instance_key.common().member_flags().IS_OPTIONAL(false);
    mst_instance_key.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_instance_key.common().member_flags().IS_KEY(true);
    mst_instance_key.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_instance_key.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));

    MD5 instance_key_hash("instance_key");
    for(int i = 0; i < 4; ++i)
    {
        mst_instance_key.detail().name_hash()[i] = instance_key_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_instance_key);

    MinimalStructMember mst_index;
    mst_index.common().member_id(memberId++);
    mst_index.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_index.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_index.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_index.common().member_flags().IS_OPTIONAL(false);
    mst_index.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_index.common().member_flags().IS_KEY(false);
    mst_index.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_index.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint32_t", false));


    MD5 index_hash("index");
    for(int i = 0; i < 4; ++i)
    {
        mst_index.detail().name_hash()[i] = index_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_index);

    MinimalStructMember mst_value;
    mst_value.common().member_id(memberId++);
    mst_value.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    mst_value.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    mst_value.common().member_flags().IS_EXTERNAL(false); // Unsupported
    mst_value.common().member_flags().IS_OPTIONAL(false);
    mst_value.common().member_flags().IS_MUST_UNDERSTAND(false);
    mst_value.common().member_flags().IS_KEY(false);
    mst_value.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    mst_value.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));


    MD5 value_hash("value");
    for(int i = 0; i < 4; ++i)
    {
        mst_value.detail().name_hash()[i] = value_hash.digest[i];
    }
    type_object->minimal().struct_type().member_seq().emplace_back(mst_value);


    // Header
    // TODO Inheritance
    //type_object->minimal().struct_type().header().base_type()._d(EK_MINIMAL);
    //type_object->minimal().struct_type().header().base_type().equivalence_hash()[0..13];
    TypeIdentifier identifier;
    identifier._d(EK_MINIMAL);

    eprosima::fastcdr::CdrSizeCalculator calculator(eprosima::fastcdr::CdrVersion::XCDRv1);
    size_t current_alignment {0};
    SerializedPayload_t payload(static_cast<uint32_t>(
        calculator.calculate_serialized_size(type_object->minimal().struct_type(), current_alignment) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::CdrVersion::XCDRv1); // Object that serializes the data.
    payload.encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;

    ser << *type_object;
#if FASTCDR_VERSION_MAJOR == 1
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
#else
    payload.length = (uint32_t)ser.get_serialized_data_length(); //Get the serialized length
#endif // FASTCDR_VERSION_MAJOR == 1
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("Key_TypeIntrospectionExample", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("Key_TypeIntrospectionExample", false);
}

const TypeObject* GetCompleteKey_TypeIntrospectionExampleObject()
{
    const TypeObject* c_type_object = TypeObjectFactory::get_instance()->get_type_object("Key_TypeIntrospectionExample", true);
    if (c_type_object != nullptr && c_type_object->_d() == EK_COMPLETE)
    {
        return c_type_object;
    }

    TypeObject *type_object = new TypeObject();
    type_object->_d(EK_COMPLETE);
    type_object->complete()._d(TK_STRUCTURE);

    type_object->complete().struct_type().struct_flags().IS_FINAL(false);
    type_object->complete().struct_type().struct_flags().IS_APPENDABLE(false);
    type_object->complete().struct_type().struct_flags().IS_MUTABLE(false);
    type_object->complete().struct_type().struct_flags().IS_NESTED(false);
    type_object->complete().struct_type().struct_flags().IS_AUTOID_HASH(false); // Unsupported

    MemberId memberId = 0;
    CompleteStructMember cst_instance_key;
    cst_instance_key.common().member_id(memberId++);
    cst_instance_key.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_instance_key.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_instance_key.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_instance_key.common().member_flags().IS_OPTIONAL(false);
    cst_instance_key.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_instance_key.common().member_flags().IS_KEY(true);
    cst_instance_key.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_instance_key.common().member_type_id(*TypeObjectFactory::get_instance()->get_string_identifier(255, false));

    cst_instance_key.detail().name("instance_key");

    {
        AppliedAnnotation ann;
        //ann.annotation_typeid(GetkeyIdentifier(true));
        ann.annotation_typeid(*TypeObjectFactory::get_instance()->get_type_identifier_trying_complete("key"));
            {
                AppliedAnnotationParameter annParam;
                MD5 message_hash("value");
                for(int i = 0; i < 4; ++i)
                {
                    annParam.paramname_hash()[i] = message_hash.digest[i];
                }
                AnnotationParameterValue paramValue;
                paramValue._d(TK_BOOLEAN);
                paramValue.from_string("true");
                annParam.value(paramValue);
                ann.param_seq().push_back(annParam);
            }

        cst_instance_key.detail().ann_custom().push_back(ann);
    }


    type_object->complete().struct_type().member_seq().emplace_back(cst_instance_key);

    CompleteStructMember cst_index;
    cst_index.common().member_id(memberId++);
    cst_index.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_index.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_index.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_index.common().member_flags().IS_OPTIONAL(false);
    cst_index.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_index.common().member_flags().IS_KEY(false);
    cst_index.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_index.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("uint32_t", false));


    cst_index.detail().name("index");

    type_object->complete().struct_type().member_seq().emplace_back(cst_index);

    CompleteStructMember cst_value;
    cst_value.common().member_id(memberId++);
    cst_value.common().member_flags().TRY_CONSTRUCT1(false); // Unsupported
    cst_value.common().member_flags().TRY_CONSTRUCT2(false); // Unsupported
    cst_value.common().member_flags().IS_EXTERNAL(false); // Unsupported
    cst_value.common().member_flags().IS_OPTIONAL(false);
    cst_value.common().member_flags().IS_MUST_UNDERSTAND(false);
    cst_value.common().member_flags().IS_KEY(false);
    cst_value.common().member_flags().IS_DEFAULT(false); // Doesn't apply
    cst_value.common().member_type_id(*TypeObjectFactory::get_instance()->get_type_identifier("int32_t", false));


    cst_value.detail().name("value");

    type_object->complete().struct_type().member_seq().emplace_back(cst_value);


    // Header
    type_object->complete().struct_type().header().detail().type_name("Key_TypeIntrospectionExample");
    // TODO inheritance
    TypeIdentifier identifier;
    identifier._d(EK_COMPLETE);

    eprosima::fastcdr::CdrSizeCalculator calculator(eprosima::fastcdr::CdrVersion::XCDRv1);
    size_t current_alignment {0};
    SerializedPayload_t payload(static_cast<uint32_t>(
        calculator.calculate_serialized_size(type_object->complete().struct_type(), current_alignment) + 4));
    eprosima::fastcdr::FastBuffer fastbuffer((char*) payload.data, payload.max_size);
    // Fixed endian (Page 221, EquivalenceHash definition of Extensible and Dynamic Topic Types for DDS document)
    eprosima::fastcdr::Cdr ser(
        fastbuffer, eprosima::fastcdr::Cdr::LITTLE_ENDIANNESS,
        eprosima::fastcdr::CdrVersion::XCDRv1); // Object that serializes the data.
    payload.encapsulation = ser.endianness() == eprosima::fastcdr::Cdr::BIG_ENDIANNESS ? CDR_BE : CDR_LE;

    ser << *type_object;
#if FASTCDR_VERSION_MAJOR == 1
    payload.length = (uint32_t)ser.getSerializedDataLength(); //Get the serialized length
#else
    payload.length = (uint32_t)ser.get_serialized_data_length(); //Get the serialized length
#endif // FASTCDR_VERSION_MAJOR == 1
    MD5 objectHash;
    objectHash.update((char*)payload.data, payload.length);
    objectHash.finalize();
    for(int i = 0; i < 14; ++i)
    {
        identifier.equivalence_hash()[i] = objectHash.digest[i];
    }

    TypeObjectFactory::get_instance()->add_type_object("Key_TypeIntrospectionExample", &identifier, type_object);
    delete type_object;
    return TypeObjectFactory::get_instance()->get_type_object("Key_TypeIntrospectionExample", true);
}