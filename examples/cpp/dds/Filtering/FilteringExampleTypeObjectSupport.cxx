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
 * @file FilteringExampleTypeObjectSupport.cxx
 * Source file containing the implementation to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen.
 */

#include "FilteringExampleTypeObjectSupport.hpp"

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

#include "FilteringExample.hpp"


using namespace eprosima::fastdds::dds::xtypes;

// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_FilteringExample_type_identifier(
        TypeIdentifierPair& type_ids_FilteringExample)
{

    ReturnCode_t return_code_FilteringExample {eprosima::fastdds::dds::RETCODE_OK};
    return_code_FilteringExample =
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
        "FilteringExample", type_ids_FilteringExample);
    if (eprosima::fastdds::dds::RETCODE_OK != return_code_FilteringExample)
    {
        StructTypeFlag struct_flags_FilteringExample = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::NOT_APPLIED,
                false, false);
        static_cast<void>(return_code_FilteringExample);
        QualifiedTypeName type_name_FilteringExample = "FilteringExample";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_FilteringExample;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_FilteringExample;
        CompleteTypeDetail detail_FilteringExample = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_FilteringExample, ann_custom_FilteringExample, type_name_FilteringExample.to_string());
        CompleteStructHeader header_FilteringExample;
        header_FilteringExample = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_FilteringExample);
        CompleteStructMemberSeq member_seq_FilteringExample;
        {
            TypeIdentifierPair type_ids_sampleNumber;
            ReturnCode_t return_code_sampleNumber {eprosima::fastdds::dds::RETCODE_OK};
            return_code_sampleNumber =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_int32_t", type_ids_sampleNumber);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_sampleNumber)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "sampleNumber Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                return;
            }
            StructMemberFlag member_flags_sampleNumber = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, false, false);
            MemberId member_id_sampleNumber = 0x00000000;
            bool common_sampleNumber_ec {false};
            CommonStructMember common_sampleNumber {TypeObjectUtils::build_common_struct_member(member_id_sampleNumber, member_flags_sampleNumber, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_sampleNumber, common_sampleNumber_ec))};
            if (!common_sampleNumber_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure sampleNumber member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_sampleNumber = "sampleNumber";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_sampleNumber;
            ann_custom_FilteringExample.reset();
            CompleteMemberDetail detail_sampleNumber = TypeObjectUtils::build_complete_member_detail(name_sampleNumber, member_ann_builtin_sampleNumber, ann_custom_FilteringExample);
            CompleteStructMember member_sampleNumber = TypeObjectUtils::build_complete_struct_member(common_sampleNumber, detail_sampleNumber);
            TypeObjectUtils::add_complete_struct_member(member_seq_FilteringExample, member_sampleNumber);
        }
        CompleteStructType struct_type_FilteringExample = TypeObjectUtils::build_complete_struct_type(struct_flags_FilteringExample, header_FilteringExample, member_seq_FilteringExample);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_FilteringExample, type_name_FilteringExample.to_string(), type_ids_FilteringExample))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "FilteringExample already registered in TypeObjectRegistry for a different type.");
        }
    }
}

