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
 * @file KeyedData1mbTypeObjectSupport.cxx
 * Source file containing the implementation to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen.
 */

#include "KeyedData1mbTypeObjectSupport.hpp"

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

#include "KeyedData1mb.hpp"


using namespace eprosima::fastdds::dds::xtypes;

// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_KeyedData1mb_type_identifier(
        TypeIdentifier& type_id)
{
    {
        StructTypeFlag struct_flags_KeyedData1mb = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::NOT_APPLIED,
                false, false);
        ReturnCode_t return_code_KeyedData1mb;
        TypeIdentifierPair type_ids_KeyedData1mb;
        QualifiedTypeName type_name_KeyedData1mb = "KeyedData1mb";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_KeyedData1mb;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_KeyedData1mb;
        CompleteTypeDetail detail_KeyedData1mb = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_KeyedData1mb, ann_custom_KeyedData1mb, type_name_KeyedData1mb.to_string());
        CompleteStructHeader header_KeyedData1mb;
        header_KeyedData1mb = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_KeyedData1mb);
        CompleteStructMemberSeq member_seq_KeyedData1mb;
        {
            return_code_KeyedData1mb =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_uint16_t", type_ids_KeyedData1mb);

            if (return_code_KeyedData1mb != eprosima::fastdds::dds::RETCODE_OK)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "key Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                type_id = TypeIdentifier();
                return;
            }
            StructMemberFlag member_flags_key = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, true, false);
            CommonStructMember common_key;
            MemberId member_id_key = 0x00000000;
            if (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1()._d() || TK_NONE == type_ids_KeyedData1mb.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_KeyedData1mb.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_KeyedData1mb.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_KeyedData1mb.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_KeyedData1mb.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_KeyedData1mb.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_KeyedData1mb.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().map_ldefn().key_identifier()->_d())))
            {
                common_key = TypeObjectUtils::build_common_struct_member(member_id_key, member_flags_key, type_ids_KeyedData1mb.type_identifier1());
            }
            else if (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_KeyedData1mb.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_KeyedData1mb.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_KeyedData1mb.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_KeyedData1mb.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_KeyedData1mb.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_KeyedData1mb.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().map_ldefn().key_identifier()->_d())))
            {
                common_key = TypeObjectUtils::build_common_struct_member(member_id_key, member_flags_key, type_ids_KeyedData1mb.type_identifier2());
            }
            else
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "Structure key member TypeIdentifier inconsistent.");
                type_id = TypeIdentifier();
                return;
            }
            MemberName name_key = "key";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_key;
            ann_custom_KeyedData1mb.reset();
            AppliedAnnotationSeq tmp_ann_custom_key;
            eprosima::fastcdr::optional<std::string> unit_key;
            eprosima::fastcdr::optional<AnnotationParameterValue> min_key;
            eprosima::fastcdr::optional<AnnotationParameterValue> max_key;
            eprosima::fastcdr::optional<std::string> hash_id_key;
            if (unit_key.has_value() || min_key.has_value() || max_key.has_value() || hash_id_key.has_value())
            {
                member_ann_builtin_key = TypeObjectUtils::build_applied_builtin_member_annotations(unit_key, min_key, max_key, hash_id_key);
            }
            if (!tmp_ann_custom_key.empty())
            {
                ann_custom_KeyedData1mb = tmp_ann_custom_key;
            }
            CompleteMemberDetail detail_key = TypeObjectUtils::build_complete_member_detail(name_key, member_ann_builtin_key, ann_custom_KeyedData1mb);
            CompleteStructMember member_key = TypeObjectUtils::build_complete_struct_member(common_key, detail_key);
            TypeObjectUtils::add_complete_struct_member(member_seq_KeyedData1mb, member_key);
        }
        {
            return_code_KeyedData1mb =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "anonymous_sequence_uint8_t_1023996", type_ids_KeyedData1mb);

            if (return_code_KeyedData1mb != eprosima::fastdds::dds::RETCODE_OK)
            {
                return_code_KeyedData1mb =
                    eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                    "_byte", type_ids_KeyedData1mb);

                if (return_code_KeyedData1mb != eprosima::fastdds::dds::RETCODE_OK)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "Sequence element TypeIdentifier unknown to TypeObjectRegistry.");
                    type_id = TypeIdentifier();
                    return;
                }
                TypeIdentifier* element_identifier_anonymous_sequence_uint8_t_1023996 {nullptr};
                if (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1()._d() || TK_NONE == type_ids_KeyedData1mb.type_identifier2()._d() ||
                        (TI_PLAIN_SEQUENCE_SMALL == type_ids_KeyedData1mb.type_identifier1()._d() &&
                        EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().seq_sdefn().header().equiv_kind()) ||
                        (TI_PLAIN_SEQUENCE_LARGE == type_ids_KeyedData1mb.type_identifier1()._d() &&
                        EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().seq_ldefn().header().equiv_kind()) ||
                        (TI_PLAIN_ARRAY_SMALL == type_ids_KeyedData1mb.type_identifier1()._d() &&
                        EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().array_sdefn().header().equiv_kind()) ||
                        (TI_PLAIN_ARRAY_LARGE == type_ids_KeyedData1mb.type_identifier1()._d() &&
                        EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().array_ldefn().header().equiv_kind()) ||
                        (TI_PLAIN_MAP_SMALL == type_ids_KeyedData1mb.type_identifier1()._d() &&
                        (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().map_sdefn().header().equiv_kind() ||
                        EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().map_sdefn().key_identifier()->_d())) ||
                        (TI_PLAIN_MAP_LARGE == type_ids_KeyedData1mb.type_identifier1()._d() &&
                        (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().map_ldefn().header().equiv_kind() ||
                        EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().map_ldefn().key_identifier()->_d())))
                {
                    element_identifier_anonymous_sequence_uint8_t_1023996 = new TypeIdentifier(type_ids_KeyedData1mb.type_identifier1());
                }
                else if (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2()._d() ||
                        (TI_PLAIN_SEQUENCE_SMALL == type_ids_KeyedData1mb.type_identifier2()._d() &&
                        EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().seq_sdefn().header().equiv_kind()) ||
                        (TI_PLAIN_SEQUENCE_LARGE == type_ids_KeyedData1mb.type_identifier2()._d() &&
                        EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().seq_ldefn().header().equiv_kind()) ||
                        (TI_PLAIN_ARRAY_SMALL == type_ids_KeyedData1mb.type_identifier2()._d() &&
                        EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().array_sdefn().header().equiv_kind()) ||
                        (TI_PLAIN_ARRAY_LARGE == type_ids_KeyedData1mb.type_identifier2()._d() &&
                        EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().array_ldefn().header().equiv_kind()) ||
                        (TI_PLAIN_MAP_SMALL == type_ids_KeyedData1mb.type_identifier2()._d() &&
                        (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().map_sdefn().header().equiv_kind() ||
                        EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().map_sdefn().key_identifier()->_d())) ||
                        (TI_PLAIN_MAP_LARGE == type_ids_KeyedData1mb.type_identifier2()._d() &&
                        (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().map_ldefn().header().equiv_kind() ||
                        EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().map_ldefn().key_identifier()->_d())))
                {
                    element_identifier_anonymous_sequence_uint8_t_1023996 = new TypeIdentifier(type_ids_KeyedData1mb.type_identifier2());
                }
                else
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "Sequence element TypeIdentifier inconsistent.");
                    type_id = TypeIdentifier();
                    return;
                }
                EquivalenceKind equiv_kind_anonymous_sequence_uint8_t_1023996 = EK_COMPLETE;
                if (TK_NONE == type_ids_KeyedData1mb.type_identifier2()._d())
                {
                    equiv_kind_anonymous_sequence_uint8_t_1023996 = EK_BOTH;
                }
                CollectionElementFlag element_flags_anonymous_sequence_uint8_t_1023996 = 0;
                PlainCollectionHeader header_anonymous_sequence_uint8_t_1023996 = TypeObjectUtils::build_plain_collection_header(equiv_kind_anonymous_sequence_uint8_t_1023996, element_flags_anonymous_sequence_uint8_t_1023996);
                {
                    LBound bound = 1023996;
                    PlainSequenceLElemDefn seq_ldefn = TypeObjectUtils::build_plain_sequence_l_elem_defn(header_anonymous_sequence_uint8_t_1023996, bound,
                                eprosima::fastcdr::external<TypeIdentifier>(element_identifier_anonymous_sequence_uint8_t_1023996));
                    if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                            TypeObjectUtils::build_and_register_l_sequence_type_identifier(seq_ldefn, "anonymous_sequence_uint8_t_1023996"))
                    {
                        EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "anonymous_sequence_uint8_t_1023996 already registered in TypeObjectRegistry for a different type.");
                    }
                }
                return_code_KeyedData1mb =
                    eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                    "anonymous_sequence_uint8_t_1023996", type_ids_KeyedData1mb);
                if (return_code_KeyedData1mb != eprosima::fastdds::dds::RETCODE_OK)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                                "anonymous_sequence_uint8_t_1023996: Given Sequence TypeIdentifier unknown to TypeObjectRegistry.");
                    type_id = TypeIdentifier();
                    return;
                }
            }
            StructMemberFlag member_flags_data = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, false, false);
            CommonStructMember common_data;
            MemberId member_id_data = 0x00000001;
            if (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1()._d() || TK_NONE == type_ids_KeyedData1mb.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_KeyedData1mb.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_KeyedData1mb.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_KeyedData1mb.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_KeyedData1mb.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_KeyedData1mb.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_KeyedData1mb.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier1().map_ldefn().key_identifier()->_d())))
            {
                common_data = TypeObjectUtils::build_common_struct_member(member_id_data, member_flags_data, type_ids_KeyedData1mb.type_identifier1());
            }
            else if (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_KeyedData1mb.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_KeyedData1mb.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_KeyedData1mb.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_KeyedData1mb.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_KeyedData1mb.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_KeyedData1mb.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_KeyedData1mb.type_identifier2().map_ldefn().key_identifier()->_d())))
            {
                common_data = TypeObjectUtils::build_common_struct_member(member_id_data, member_flags_data, type_ids_KeyedData1mb.type_identifier2());
            }
            else
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "Structure data member TypeIdentifier inconsistent.");
                type_id = TypeIdentifier();
                return;
            }
            MemberName name_data = "data";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_data;
            ann_custom_KeyedData1mb.reset();
            CompleteMemberDetail detail_data = TypeObjectUtils::build_complete_member_detail(name_data, member_ann_builtin_data, ann_custom_KeyedData1mb);
            CompleteStructMember member_data = TypeObjectUtils::build_complete_struct_member(common_data, detail_data);
            TypeObjectUtils::add_complete_struct_member(member_seq_KeyedData1mb, member_data);
        }
        CompleteStructType struct_type_KeyedData1mb = TypeObjectUtils::build_complete_struct_type(struct_flags_KeyedData1mb, header_KeyedData1mb, member_seq_KeyedData1mb);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_KeyedData1mb, type_name_KeyedData1mb.to_string(), type_id))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "KeyedData1mb already registered in TypeObjectRegistry for a different type.");
        }
        return_code_KeyedData1mb =
            eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
            "KeyedData1mb", type_ids_KeyedData1mb);
        if (return_code_KeyedData1mb != eprosima::fastdds::dds::RETCODE_OK)
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "KeyedData1mb: Given Struct TypeIdentifier unknown to TypeObjectRegistry.");
            type_id = TypeIdentifier();
            return;
        }
    }
}

