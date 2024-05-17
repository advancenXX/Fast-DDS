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
 * @file AllocTestTypeTypeObjectSupport.cxx
 * Source file containing the implementation to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen.
 */

#include "AllocTestTypeTypeObjectSupport.hpp"

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

#include "AllocTestType.hpp"


using namespace eprosima::fastdds::dds::xtypes;

// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_AllocTestType_type_identifier(
        TypeIdentifier& type_id)
{
    {
        StructTypeFlag struct_flags_AllocTestType = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::NOT_APPLIED,
                false, false);
        ReturnCode_t return_code_AllocTestType;
        TypeIdentifierPair type_ids_AllocTestType;
        QualifiedTypeName type_name_AllocTestType = "AllocTestType";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_AllocTestType;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_AllocTestType;
        CompleteTypeDetail detail_AllocTestType = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_AllocTestType, ann_custom_AllocTestType, type_name_AllocTestType.to_string());
        CompleteStructHeader header_AllocTestType;
        header_AllocTestType = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_AllocTestType);
        CompleteStructMemberSeq member_seq_AllocTestType;
        {
            return_code_AllocTestType =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_uint32_t", type_ids_AllocTestType);

            if (return_code_AllocTestType != eprosima::fastdds::dds::RETCODE_OK)
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
            if (EK_COMPLETE == type_ids_AllocTestType.type_identifier1()._d() || TK_NONE == type_ids_AllocTestType.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_AllocTestType.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_AllocTestType.type_identifier1().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_AllocTestType.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_AllocTestType.type_identifier1().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_AllocTestType.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_AllocTestType.type_identifier1().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_AllocTestType.type_identifier1()._d() &&
                    EK_COMPLETE == type_ids_AllocTestType.type_identifier1().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_AllocTestType.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_AllocTestType.type_identifier1().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_AllocTestType.type_identifier1().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_AllocTestType.type_identifier1()._d() &&
                    (EK_COMPLETE == type_ids_AllocTestType.type_identifier1().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_AllocTestType.type_identifier1().map_ldefn().key_identifier()->_d())))
            {
                common_index = TypeObjectUtils::build_common_struct_member(member_id_index, member_flags_index, type_ids_AllocTestType.type_identifier1());
            }
            else if (EK_COMPLETE == type_ids_AllocTestType.type_identifier2()._d() ||
                    (TI_PLAIN_SEQUENCE_SMALL == type_ids_AllocTestType.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_AllocTestType.type_identifier2().seq_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_SEQUENCE_LARGE == type_ids_AllocTestType.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_AllocTestType.type_identifier2().seq_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_SMALL == type_ids_AllocTestType.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_AllocTestType.type_identifier2().array_sdefn().header().equiv_kind()) ||
                    (TI_PLAIN_ARRAY_LARGE == type_ids_AllocTestType.type_identifier2()._d() &&
                    EK_COMPLETE == type_ids_AllocTestType.type_identifier2().array_ldefn().header().equiv_kind()) ||
                    (TI_PLAIN_MAP_SMALL == type_ids_AllocTestType.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_AllocTestType.type_identifier2().map_sdefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_AllocTestType.type_identifier2().map_sdefn().key_identifier()->_d())) ||
                    (TI_PLAIN_MAP_LARGE == type_ids_AllocTestType.type_identifier2()._d() &&
                    (EK_COMPLETE == type_ids_AllocTestType.type_identifier2().map_ldefn().header().equiv_kind() ||
                    EK_COMPLETE == type_ids_AllocTestType.type_identifier2().map_ldefn().key_identifier()->_d())))
            {
                common_index = TypeObjectUtils::build_common_struct_member(member_id_index, member_flags_index, type_ids_AllocTestType.type_identifier2());
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
            ann_custom_AllocTestType.reset();
            CompleteMemberDetail detail_index = TypeObjectUtils::build_complete_member_detail(name_index, member_ann_builtin_index, ann_custom_AllocTestType);
            CompleteStructMember member_index = TypeObjectUtils::build_complete_struct_member(common_index, detail_index);
            TypeObjectUtils::add_complete_struct_member(member_seq_AllocTestType, member_index);
        }
        CompleteStructType struct_type_AllocTestType = TypeObjectUtils::build_complete_struct_type(struct_flags_AllocTestType, header_AllocTestType, member_seq_AllocTestType);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_AllocTestType, type_name_AllocTestType.to_string(), type_id))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "AllocTestType already registered in TypeObjectRegistry for a different type.");
        }
        return_code_AllocTestType =
            eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
            "AllocTestType", type_ids_AllocTestType);
        if (return_code_AllocTestType != eprosima::fastdds::dds::RETCODE_OK)
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "AllocTestType: Given Struct TypeIdentifier unknown to TypeObjectRegistry.");
            type_id = TypeIdentifier();
            return;
        }
    }
}

