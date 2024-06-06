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
 * @file Data1mbTypeObjectSupport.cxx
 * Source file containing the implementation to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen.
 */

#include "Data1mbTypeObjectSupport.hpp"

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

#include "Data1mb.hpp"


using namespace eprosima::fastdds::dds::xtypes;

// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_Data1mb_type_identifier(
        TypeIdentifierPair& type_ids_Data1mb)
{

    ReturnCode_t return_code_Data1mb {eprosima::fastdds::dds::RETCODE_OK};
    return_code_Data1mb =
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
        "Data1mb", type_ids_Data1mb);
    if (eprosima::fastdds::dds::RETCODE_OK != return_code_Data1mb)
    {
        StructTypeFlag struct_flags_Data1mb = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::NOT_APPLIED,
                false, false);
        QualifiedTypeName type_name_Data1mb = "Data1mb";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_Data1mb;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_Data1mb;
        CompleteTypeDetail detail_Data1mb = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_Data1mb, ann_custom_Data1mb, type_name_Data1mb.to_string());
        CompleteStructHeader header_Data1mb;
        header_Data1mb = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_Data1mb);
        CompleteStructMemberSeq member_seq_Data1mb;
        {
            TypeIdentifierPair type_ids_data;
            ReturnCode_t return_code_data {eprosima::fastdds::dds::RETCODE_OK};
            return_code_data =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "anonymous_sequence_uint8_t_1024000", type_ids_data);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_data)
            {
                return_code_data =
                    eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                    "_byte", type_ids_data);

                if (eprosima::fastdds::dds::RETCODE_OK != return_code_data)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "Sequence element TypeIdentifier unknown to TypeObjectRegistry.");
                    return;
                }
                bool element_identifier_anonymous_sequence_uint8_t_1024000_ec {false};
                TypeIdentifier* element_identifier_anonymous_sequence_uint8_t_1024000 {new TypeIdentifier(TypeObjectUtils::retrieve_complete_type_identifier(type_ids_data, element_identifier_anonymous_sequence_uint8_t_1024000_ec))};
                if (!element_identifier_anonymous_sequence_uint8_t_1024000_ec)
                {
                    EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Sequence element TypeIdentifier inconsistent.");
                    return;
                }
                EquivalenceKind equiv_kind_anonymous_sequence_uint8_t_1024000 = EK_COMPLETE;
                if (TK_NONE == type_ids_data.type_identifier2()._d())
                {
                    equiv_kind_anonymous_sequence_uint8_t_1024000 = EK_BOTH;
                }
                CollectionElementFlag element_flags_anonymous_sequence_uint8_t_1024000 = 0;
                PlainCollectionHeader header_anonymous_sequence_uint8_t_1024000 = TypeObjectUtils::build_plain_collection_header(equiv_kind_anonymous_sequence_uint8_t_1024000, element_flags_anonymous_sequence_uint8_t_1024000);
                {
                    LBound bound = 1024000;
                    PlainSequenceLElemDefn seq_ldefn = TypeObjectUtils::build_plain_sequence_l_elem_defn(header_anonymous_sequence_uint8_t_1024000, bound,
                                eprosima::fastcdr::external<TypeIdentifier>(element_identifier_anonymous_sequence_uint8_t_1024000));
                    if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                            TypeObjectUtils::build_and_register_l_sequence_type_identifier(seq_ldefn, "anonymous_sequence_uint8_t_1024000", type_ids_data))
                    {
                        EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                            "anonymous_sequence_uint8_t_1024000 already registered in TypeObjectRegistry for a different type.");
                    }
                }
            }
            StructMemberFlag member_flags_data = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_data = 0x00000000;
            bool common_data_ec {false};
            CommonStructMember common_data {TypeObjectUtils::build_common_struct_member(member_id_data, member_flags_data, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_data, common_data_ec))};
            if (!common_data_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure data member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_data = "data";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_data;
            ann_custom_Data1mb.reset();
            CompleteMemberDetail detail_data = TypeObjectUtils::build_complete_member_detail(name_data, member_ann_builtin_data, ann_custom_Data1mb);
            CompleteStructMember member_data = TypeObjectUtils::build_complete_struct_member(common_data, detail_data);
            TypeObjectUtils::add_complete_struct_member(member_seq_Data1mb, member_data);
        }
        CompleteStructType struct_type_Data1mb = TypeObjectUtils::build_complete_struct_type(struct_flags_Data1mb, header_Data1mb, member_seq_Data1mb);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_Data1mb, type_name_Data1mb.to_string(), type_ids_Data1mb))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "Data1mb already registered in TypeObjectRegistry for a different type.");
        }
    }
}

