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
 * @file CalculatorTypeObjectSupport.cxx
 * Source file containing the implementation to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen.
 */

#include "CalculatorTypeObjectSupport.hpp"

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

#include "Calculator.hpp"


using namespace eprosima::fastdds::dds::xtypes;

void register_OperationType_type_identifier(
        TypeIdentifierPair& type_ids_OperationType)
{
    ReturnCode_t return_code_OperationType {eprosima::fastdds::dds::RETCODE_OK};
    return_code_OperationType =
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
        "OperationType", type_ids_OperationType);
    if (eprosima::fastdds::dds::RETCODE_OK != return_code_OperationType)
    {
        EnumTypeFlag enum_flags_OperationType = 0;
        BitBound bit_bound_OperationType = 32;
        CommonEnumeratedHeader common_OperationType = TypeObjectUtils::build_common_enumerated_header(bit_bound_OperationType);
        QualifiedTypeName type_name_OperationType = "OperationType";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_OperationType;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_OperationType;
        CompleteTypeDetail detail_OperationType = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_OperationType, ann_custom_OperationType, type_name_OperationType.to_string());
        CompleteEnumeratedHeader header_OperationType = TypeObjectUtils::build_complete_enumerated_header(common_OperationType, detail_OperationType);
        CompleteEnumeratedLiteralSeq literal_seq_OperationType;
        {
            EnumeratedLiteralFlag flags_ADDITION = TypeObjectUtils::build_enumerated_literal_flag(false);
            CommonEnumeratedLiteral common_ADDITION = TypeObjectUtils::build_common_enumerated_literal(0, flags_ADDITION);
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_ADDITION;
            ann_custom_OperationType.reset();
            MemberName name_ADDITION = "ADDITION";
            CompleteMemberDetail detail_ADDITION = TypeObjectUtils::build_complete_member_detail(name_ADDITION, member_ann_builtin_ADDITION, ann_custom_OperationType);
            CompleteEnumeratedLiteral literal_ADDITION = TypeObjectUtils::build_complete_enumerated_literal(common_ADDITION, detail_ADDITION);
            TypeObjectUtils::add_complete_enumerated_literal(literal_seq_OperationType, literal_ADDITION);
        }
        {
            EnumeratedLiteralFlag flags_SUBTRACTION = TypeObjectUtils::build_enumerated_literal_flag(false);
            CommonEnumeratedLiteral common_SUBTRACTION = TypeObjectUtils::build_common_enumerated_literal(1, flags_SUBTRACTION);
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_SUBTRACTION;
            ann_custom_OperationType.reset();
            MemberName name_SUBTRACTION = "SUBTRACTION";
            CompleteMemberDetail detail_SUBTRACTION = TypeObjectUtils::build_complete_member_detail(name_SUBTRACTION, member_ann_builtin_SUBTRACTION, ann_custom_OperationType);
            CompleteEnumeratedLiteral literal_SUBTRACTION = TypeObjectUtils::build_complete_enumerated_literal(common_SUBTRACTION, detail_SUBTRACTION);
            TypeObjectUtils::add_complete_enumerated_literal(literal_seq_OperationType, literal_SUBTRACTION);
        }
        {
            EnumeratedLiteralFlag flags_MULTIPLICATION = TypeObjectUtils::build_enumerated_literal_flag(false);
            CommonEnumeratedLiteral common_MULTIPLICATION = TypeObjectUtils::build_common_enumerated_literal(2, flags_MULTIPLICATION);
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_MULTIPLICATION;
            ann_custom_OperationType.reset();
            MemberName name_MULTIPLICATION = "MULTIPLICATION";
            CompleteMemberDetail detail_MULTIPLICATION = TypeObjectUtils::build_complete_member_detail(name_MULTIPLICATION, member_ann_builtin_MULTIPLICATION, ann_custom_OperationType);
            CompleteEnumeratedLiteral literal_MULTIPLICATION = TypeObjectUtils::build_complete_enumerated_literal(common_MULTIPLICATION, detail_MULTIPLICATION);
            TypeObjectUtils::add_complete_enumerated_literal(literal_seq_OperationType, literal_MULTIPLICATION);
        }
        {
            EnumeratedLiteralFlag flags_DIVISION = TypeObjectUtils::build_enumerated_literal_flag(false);
            CommonEnumeratedLiteral common_DIVISION = TypeObjectUtils::build_common_enumerated_literal(3, flags_DIVISION);
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_DIVISION;
            ann_custom_OperationType.reset();
            MemberName name_DIVISION = "DIVISION";
            CompleteMemberDetail detail_DIVISION = TypeObjectUtils::build_complete_member_detail(name_DIVISION, member_ann_builtin_DIVISION, ann_custom_OperationType);
            CompleteEnumeratedLiteral literal_DIVISION = TypeObjectUtils::build_complete_enumerated_literal(common_DIVISION, detail_DIVISION);
            TypeObjectUtils::add_complete_enumerated_literal(literal_seq_OperationType, literal_DIVISION);
        }
        CompleteEnumeratedType enumerated_type_OperationType = TypeObjectUtils::build_complete_enumerated_type(enum_flags_OperationType, header_OperationType,
                literal_seq_OperationType);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_enumerated_type_object(enumerated_type_OperationType, type_name_OperationType.to_string(), type_ids_OperationType))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                "OperationType already registered in TypeObjectRegistry for a different type.");
        }
    }
}// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_RequestType_type_identifier(
        TypeIdentifierPair& type_ids_RequestType)
{

    ReturnCode_t return_code_RequestType {eprosima::fastdds::dds::RETCODE_OK};
    return_code_RequestType =
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
        "RequestType", type_ids_RequestType);
    if (eprosima::fastdds::dds::RETCODE_OK != return_code_RequestType)
    {
        StructTypeFlag struct_flags_RequestType = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::NOT_APPLIED,
                false, false);
        QualifiedTypeName type_name_RequestType = "RequestType";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_RequestType;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_RequestType;
        CompleteTypeDetail detail_RequestType = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_RequestType, ann_custom_RequestType, type_name_RequestType.to_string());
        CompleteStructHeader header_RequestType;
        header_RequestType = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_RequestType);
        CompleteStructMemberSeq member_seq_RequestType;
        {
            TypeIdentifierPair type_ids_operation;
            ReturnCode_t return_code_operation {eprosima::fastdds::dds::RETCODE_OK};
            return_code_operation =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "OperationType", type_ids_operation);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_operation)
            {
            ::register_OperationType_type_identifier(type_ids_operation);
            }
            StructMemberFlag member_flags_operation = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, false, false);
            MemberId member_id_operation = 0x00000000;
            bool common_operation_ec {false};
            CommonStructMember common_operation {TypeObjectUtils::build_common_struct_member(member_id_operation, member_flags_operation, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_operation, common_operation_ec))};
            if (!common_operation_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure operation member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_operation = "operation";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_operation;
            ann_custom_RequestType.reset();
            CompleteMemberDetail detail_operation = TypeObjectUtils::build_complete_member_detail(name_operation, member_ann_builtin_operation, ann_custom_RequestType);
            CompleteStructMember member_operation = TypeObjectUtils::build_complete_struct_member(common_operation, detail_operation);
            TypeObjectUtils::add_complete_struct_member(member_seq_RequestType, member_operation);
        }
        {
            TypeIdentifierPair type_ids_x;
            ReturnCode_t return_code_x {eprosima::fastdds::dds::RETCODE_OK};
            return_code_x =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_int32_t", type_ids_x);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_x)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "x Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                return;
            }
            StructMemberFlag member_flags_x = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, false, false);
            MemberId member_id_x = 0x00000001;
            bool common_x_ec {false};
            CommonStructMember common_x {TypeObjectUtils::build_common_struct_member(member_id_x, member_flags_x, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_x, common_x_ec))};
            if (!common_x_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure x member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_x = "x";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_x;
            ann_custom_RequestType.reset();
            CompleteMemberDetail detail_x = TypeObjectUtils::build_complete_member_detail(name_x, member_ann_builtin_x, ann_custom_RequestType);
            CompleteStructMember member_x = TypeObjectUtils::build_complete_struct_member(common_x, detail_x);
            TypeObjectUtils::add_complete_struct_member(member_seq_RequestType, member_x);
        }
        {
            TypeIdentifierPair type_ids_y;
            ReturnCode_t return_code_y {eprosima::fastdds::dds::RETCODE_OK};
            return_code_y =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_int32_t", type_ids_y);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_y)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "y Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                return;
            }
            StructMemberFlag member_flags_y = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, false, false);
            MemberId member_id_y = 0x00000002;
            bool common_y_ec {false};
            CommonStructMember common_y {TypeObjectUtils::build_common_struct_member(member_id_y, member_flags_y, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_y, common_y_ec))};
            if (!common_y_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure y member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_y = "y";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_y;
            ann_custom_RequestType.reset();
            CompleteMemberDetail detail_y = TypeObjectUtils::build_complete_member_detail(name_y, member_ann_builtin_y, ann_custom_RequestType);
            CompleteStructMember member_y = TypeObjectUtils::build_complete_struct_member(common_y, detail_y);
            TypeObjectUtils::add_complete_struct_member(member_seq_RequestType, member_y);
        }
        CompleteStructType struct_type_RequestType = TypeObjectUtils::build_complete_struct_type(struct_flags_RequestType, header_RequestType, member_seq_RequestType);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_RequestType, type_name_RequestType.to_string(), type_ids_RequestType))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "RequestType already registered in TypeObjectRegistry for a different type.");
        }
    }
}
// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_ReplyType_type_identifier(
        TypeIdentifierPair& type_ids_ReplyType)
{

    ReturnCode_t return_code_ReplyType {eprosima::fastdds::dds::RETCODE_OK};
    return_code_ReplyType =
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
        "ReplyType", type_ids_ReplyType);
    if (eprosima::fastdds::dds::RETCODE_OK != return_code_ReplyType)
    {
        StructTypeFlag struct_flags_ReplyType = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::NOT_APPLIED,
                false, false);
        QualifiedTypeName type_name_ReplyType = "ReplyType";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_ReplyType;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_ReplyType;
        CompleteTypeDetail detail_ReplyType = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_ReplyType, ann_custom_ReplyType, type_name_ReplyType.to_string());
        CompleteStructHeader header_ReplyType;
        header_ReplyType = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_ReplyType);
        CompleteStructMemberSeq member_seq_ReplyType;
        {
            TypeIdentifierPair type_ids_z;
            ReturnCode_t return_code_z {eprosima::fastdds::dds::RETCODE_OK};
            return_code_z =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "_int64_t", type_ids_z);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_z)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                        "z Structure member TypeIdentifier unknown to TypeObjectRegistry.");
                return;
            }
            StructMemberFlag member_flags_z = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructKind::NOT_APPLIED,
                    false, false, false, false);
            MemberId member_id_z = 0x00000000;
            bool common_z_ec {false};
            CommonStructMember common_z {TypeObjectUtils::build_common_struct_member(member_id_z, member_flags_z, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_z, common_z_ec))};
            if (!common_z_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure z member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_z = "z";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_z;
            ann_custom_ReplyType.reset();
            CompleteMemberDetail detail_z = TypeObjectUtils::build_complete_member_detail(name_z, member_ann_builtin_z, ann_custom_ReplyType);
            CompleteStructMember member_z = TypeObjectUtils::build_complete_struct_member(common_z, detail_z);
            TypeObjectUtils::add_complete_struct_member(member_seq_ReplyType, member_z);
        }
        CompleteStructType struct_type_ReplyType = TypeObjectUtils::build_complete_struct_type(struct_flags_ReplyType, header_ReplyType, member_seq_ReplyType);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_ReplyType, type_name_ReplyType.to_string(), type_ids_ReplyType))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "ReplyType already registered in TypeObjectRegistry for a different type.");
        }
    }
}

