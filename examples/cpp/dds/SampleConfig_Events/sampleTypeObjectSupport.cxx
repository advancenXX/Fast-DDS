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
 * @file sampleTypeObjectSupport.cxx
 * Source file containing the implementation to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen.
 */

#include "sampleTypeObjectSupport.hpp"

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

#include "sample.hpp"


using namespace eprosima::fastdds::dds::xtypes;

// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_sample_type_identifier(
        TypeIdentifierPair& type_ids_sample)
{

    ReturnCode_t return_code_sample {eprosima::fastdds::dds::RETCODE_OK};
    return_code_sample =
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
        "sample", type_ids_sample);
    if (eprosima::fastdds::dds::RETCODE_OK != return_code_sample)
    {
        StructTypeFlag struct_flags_sample = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::NOT_APPLIED,
                false, false);
        static_cast<void>(return_code_sample);
        QualifiedTypeName type_name_sample = "sample";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_sample;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_sample;
        CompleteTypeDetail detail_sample = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_sample, ann_custom_sample, type_name_sample.to_string());
        CompleteStructHeader header_sample;
        header_sample = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_sample);
        CompleteStructMemberSeq member_seq_sample;
        {
            TypeIdentifierPair type_ids_index;
            ReturnCode_t return_code_index {eprosima::fastdds::dds::RETCODE_OK};
            return_code_index =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_byte", type_ids_index);

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
            ann_custom_sample.reset();
            CompleteMemberDetail detail_index = TypeObjectUtils::build_complete_member_detail(name_index, member_ann_builtin_index, ann_custom_sample);
            CompleteStructMember member_index = TypeObjectUtils::build_complete_struct_member(common_index, detail_index);
            TypeObjectUtils::add_complete_struct_member(member_seq_sample, member_index);
        }
        {
            TypeIdentifierPair type_ids_key_value;
            ReturnCode_t return_code_key_value {eprosima::fastdds::dds::RETCODE_OK};
            return_code_key_value =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_byte", type_ids_key_value);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_key_value)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "key_value Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                return;
            }
            StructMemberFlag member_flags_key_value = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, true, false);
            MemberId member_id_key_value = 0x00000001;
            bool common_key_value_ec {false};
            CommonStructMember common_key_value {TypeObjectUtils::build_common_struct_member(member_id_key_value, member_flags_key_value, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_key_value, common_key_value_ec))};
            if (!common_key_value_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure key_value member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_key_value = "key_value";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_key_value;
            ann_custom_sample.reset();
            AppliedAnnotationSeq tmp_ann_custom_key_value;
            eprosima::fastcdr::optional<std::string> unit_key_value;
            eprosima::fastcdr::optional<AnnotationParameterValue> min_key_value;
            eprosima::fastcdr::optional<AnnotationParameterValue> max_key_value;
            eprosima::fastcdr::optional<std::string> hash_id_key_value;
            if (unit_key_value.has_value() || min_key_value.has_value() || max_key_value.has_value() || hash_id_key_value.has_value())
            {
                member_ann_builtin_key_value = TypeObjectUtils::build_applied_builtin_member_annotations(unit_key_value, min_key_value, max_key_value, hash_id_key_value);
            }
            if (!tmp_ann_custom_key_value.empty())
            {
                ann_custom_sample = tmp_ann_custom_key_value;
            }
            CompleteMemberDetail detail_key_value = TypeObjectUtils::build_complete_member_detail(name_key_value, member_ann_builtin_key_value, ann_custom_sample);
            CompleteStructMember member_key_value = TypeObjectUtils::build_complete_struct_member(common_key_value, detail_key_value);
            TypeObjectUtils::add_complete_struct_member(member_seq_sample, member_key_value);
        }
        CompleteStructType struct_type_sample = TypeObjectUtils::build_complete_struct_type(struct_flags_sample, header_sample, member_seq_sample);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_sample, type_name_sample.to_string(), type_ids_sample))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "sample already registered in TypeObjectRegistry for a different type.");
        }
    }
}

