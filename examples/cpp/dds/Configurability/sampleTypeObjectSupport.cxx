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
        TypeIdentifier& type_id)
{
    {
        StructTypeFlag struct_flags_sample = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::NOT_APPLIED,
                false, false);
        ReturnCode_t return_code_sample;
        TypeIdentifierPair type_ids_sample;
        QualifiedTypeName type_name_sample = "sample";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_sample;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_sample;
        CompleteTypeDetail detail_sample = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_sample, ann_custom_sample, type_name_sample.to_string());
        CompleteStructHeader header_sample;
        header_sample = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_sample);
        CompleteStructMemberSeq member_seq_sample;
        {
            return_code_sample =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_byte", type_ids_sample);

            if (return_code_sample != eprosima::fastdds::dds::RETCODE_OK)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "index Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                type_id = TypeIdentifier();
                return;
            }
            StructMemberFlag member_flags_index = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, false, false);
            CommonStructMember common_index;
            MemberId member_id_index = 0x00000000;
            if (EK_COMPLETE == type_ids_sample.type_identifier1()._d() || TK_NONE == type_ids_sample.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_sample.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_sample.type_identifier1().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_sample.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_sample.type_identifier1().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_sample.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_sample.type_identifier1().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_sample.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_sample.type_identifier1().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_sample.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_sample.type_identifier1().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_sample.type_identifier1().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_sample.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_sample.type_identifier1().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_sample.type_identifier1().map_ldefn().key_identifier()->_d())))
            {
                common_index = TypeObjectUtils::build_common_struct_member(member_id_index, member_flags_index, type_ids_sample.type_identifier1());
            }
            else if (EK_COMPLETE == type_ids_sample.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_sample.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_sample.type_identifier2().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_sample.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_sample.type_identifier2().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_sample.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_sample.type_identifier2().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_sample.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_sample.type_identifier2().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_sample.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_sample.type_identifier2().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_sample.type_identifier2().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_sample.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_sample.type_identifier2().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_sample.type_identifier2().map_ldefn().key_identifier()->_d())))
            {
                common_index = TypeObjectUtils::build_common_struct_member(member_id_index, member_flags_index, type_ids_sample.type_identifier2());
            }
            else
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "Structure index member TypeIdentifier inconsistent.");
                type_id = TypeIdentifier();
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
            return_code_sample =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_byte", type_ids_sample);

            if (return_code_sample != eprosima::fastdds::dds::RETCODE_OK)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "key_value Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                type_id = TypeIdentifier();
                return;
            }
            StructMemberFlag member_flags_key_value = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, true, false);
            CommonStructMember common_key_value;
            MemberId member_id_key_value = 0x00000001;
            if (EK_COMPLETE == type_ids_sample.type_identifier1()._d() || TK_NONE == type_ids_sample.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_sample.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_sample.type_identifier1().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_sample.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_sample.type_identifier1().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_sample.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_sample.type_identifier1().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_sample.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_sample.type_identifier1().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_sample.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_sample.type_identifier1().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_sample.type_identifier1().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_sample.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_sample.type_identifier1().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_sample.type_identifier1().map_ldefn().key_identifier()->_d())))
            {
                common_key_value = TypeObjectUtils::build_common_struct_member(member_id_key_value, member_flags_key_value, type_ids_sample.type_identifier1());
            }
            else if (EK_COMPLETE == type_ids_sample.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_sample.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_sample.type_identifier2().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_sample.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_sample.type_identifier2().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_sample.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_sample.type_identifier2().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_sample.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_sample.type_identifier2().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_sample.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_sample.type_identifier2().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_sample.type_identifier2().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_sample.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_sample.type_identifier2().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_sample.type_identifier2().map_ldefn().key_identifier()->_d())))
            {
                common_key_value = TypeObjectUtils::build_common_struct_member(member_id_key_value, member_flags_key_value, type_ids_sample.type_identifier2());
            }
            else
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "Structure key_value member TypeIdentifier inconsistent.");
                type_id = TypeIdentifier();
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
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_sample, type_name_sample.to_string(), type_id))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "sample already registered in TypeObjectRegistry for a different type.");
        }
        return_code_sample =
            eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
            "sample", type_ids_sample);
        if (return_code_sample != eprosima::fastdds::dds::RETCODE_OK)
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "sample: Given Struct TypeIdentifier unknown to TypeObjectRegistry.");
            type_id = TypeIdentifier();
            return;
        }
    }
}

