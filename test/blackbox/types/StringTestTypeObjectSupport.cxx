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
 * @file StringTestTypeObjectSupport.cxx
 * Source file containing the implementation to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen.
 */

#include "StringTestTypeObjectSupport.hpp"

#include <mutex>
#include <string>

#include <fastcdr/xcdr/external.hpp>
#include <fastcdr/xcdr/optional.hpp>
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/log/Log.hpp>
#include <fastdds/dds/xtypes/common.hpp>
#include <fastdds/dds/xtypes/type_representation/ITypeObjectRegistry.hpp>
#include <fastdds/dds/xtypes/type_representation/TypeObject.hpp>
#include <fastdds/dds/xtypes/type_representation/TypeObjectUtils.hpp>

#include "StringTest.hpp"


using namespace eprosima::fastdds::dds::xtypes;

// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_StringTest_type_identifier(
        TypeIdentifierPair& type_ids_StringTest)
{

    ReturnCode_t return_code_StringTest {eprosima::fastdds::dds::RETCODE_OK};
    return_code_StringTest =
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
        "StringTest", type_ids_StringTest);
    if (eprosima::fastdds::dds::RETCODE_OK != return_code_StringTest)
    {
        StructTypeFlag struct_flags_StringTest = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::NOT_APPLIED,
                false, false);
        QualifiedTypeName type_name_StringTest = "StringTest";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_StringTest;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_StringTest;
        CompleteTypeDetail detail_StringTest = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_StringTest, ann_custom_StringTest, type_name_StringTest.to_string());
        CompleteStructHeader header_StringTest;
        header_StringTest = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_StringTest);
        CompleteStructMemberSeq member_seq_StringTest;
        {
            TypeIdentifierPair type_ids_message;
            ReturnCode_t return_code_message {eprosima::fastdds::dds::RETCODE_OK};
            return_code_message =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "anonymous_string_10000", type_ids_message);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_message)
            {
                {
                    LBound bound = 10000;
                    StringLTypeDefn string_ldefn = TypeObjectUtils::build_string_l_type_defn(bound);
                    if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                            TypeObjectUtils::build_and_register_l_string_type_identifier(string_ldefn,
                            "anonymous_string_10000", type_ids_message))
                    {
                        EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "anonymous_string_10000 already registered in TypeObjectRegistry for a different type.");
                    }
                }
            }
            StructMemberFlag member_flags_message = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_message = 0x00000000;
            bool common_message_ec {false};
            CommonStructMember common_message {TypeObjectUtils::build_common_struct_member(member_id_message, member_flags_message, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_message, common_message_ec))};
            if (!common_message_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure message member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_message = "message";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_message;
            ann_custom_StringTest.reset();
            CompleteMemberDetail detail_message = TypeObjectUtils::build_complete_member_detail(name_message, member_ann_builtin_message, ann_custom_StringTest);
            CompleteStructMember member_message = TypeObjectUtils::build_complete_struct_member(common_message, detail_message);
            TypeObjectUtils::add_complete_struct_member(member_seq_StringTest, member_message);
        }
        CompleteStructType struct_type_StringTest = TypeObjectUtils::build_complete_struct_type(struct_flags_StringTest, header_StringTest, member_seq_StringTest);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_StringTest, type_name_StringTest.to_string(), type_ids_StringTest))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "StringTest already registered in TypeObjectRegistry for a different type.");
        }
    }
}

