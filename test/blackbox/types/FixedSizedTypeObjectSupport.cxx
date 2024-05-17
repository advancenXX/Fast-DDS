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
 * @file FixedSizedTypeObjectSupport.cxx
 * Source file containing the implementation to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen.
 */

#include "FixedSizedTypeObjectSupport.hpp"

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

#include "FixedSized.hpp"


using namespace eprosima::fastdds::dds::xtypes;

// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_FixedSized_type_identifier(
        TypeIdentifierPair& type_ids_FixedSized)
{

    ReturnCode_t return_code_FixedSized {eprosima::fastdds::dds::RETCODE_OK};
    return_code_FixedSized =
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
        "FixedSized", type_ids_FixedSized);
    if (eprosima::fastdds::dds::RETCODE_OK != return_code_FixedSized)
    {
        StructTypeFlag struct_flags_FixedSized = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::FINAL,
                false, false);
        QualifiedTypeName type_name_FixedSized = "FixedSized";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_FixedSized;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_FixedSized;
        AppliedAnnotationSeq tmp_ann_custom_FixedSized;
        eprosima::fastcdr::optional<AppliedVerbatimAnnotation> verbatim_FixedSized;
        if (!tmp_ann_custom_FixedSized.empty())
        {
            ann_custom_FixedSized = tmp_ann_custom_FixedSized;
        }

        CompleteTypeDetail detail_FixedSized = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_FixedSized, ann_custom_FixedSized, type_name_FixedSized.to_string());
        CompleteStructHeader header_FixedSized;
        header_FixedSized = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_FixedSized);
        CompleteStructMemberSeq member_seq_FixedSized;
        {
            TypeIdentifierPair type_ids_index;
            ReturnCode_t return_code_index {eprosima::fastdds::dds::RETCODE_OK};
            return_code_index =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_uint16_t", type_ids_index);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_index)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "index Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                return;
            }
            StructMemberFlag member_flags_index = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, false, false);
            MemberId member_id_index = 0x00000000;
            bool common_index_ec {false};
            CommonStructMember common_index {TypeObjectUtils::build_common_struct_member(member_id_index, member_flags_index, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_index, common_index_ec))};
            if (!common_index_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure index member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_index = "index";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_index;
            ann_custom_FixedSized.reset();
            CompleteMemberDetail detail_index = TypeObjectUtils::build_complete_member_detail(name_index, member_ann_builtin_index, ann_custom_FixedSized);
            CompleteStructMember member_index = TypeObjectUtils::build_complete_struct_member(common_index, detail_index);
            TypeObjectUtils::add_complete_struct_member(member_seq_FixedSized, member_index);
        }
        CompleteStructType struct_type_FixedSized = TypeObjectUtils::build_complete_struct_type(struct_flags_FixedSized, header_FixedSized, member_seq_FixedSized);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_FixedSized, type_name_FixedSized.to_string(), type_ids_FixedSized))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "FixedSized already registered in TypeObjectRegistry for a different type.");
        }
    }
}

