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
 * @file TestRegression3361TypeObjectSupport.cxx
 * Source file containing the implementation to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen.
 */

#include "TestRegression3361TypeObjectSupport.hpp"

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

#include "TestRegression3361.hpp"

#include "TestIncludeRegression3361.hpp"

using namespace eprosima::fastdds::dds::xtypes;

// TypeIdentifier is returned by reference: dependent structures/unions are registered in this same method
void register_TestRegression3361_type_identifier(
        TypeIdentifierPair& type_ids_TestRegression3361)
{

    ReturnCode_t return_code_TestRegression3361 {eprosima::fastdds::dds::RETCODE_OK};
    return_code_TestRegression3361 =
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
        "TestRegression3361", type_ids_TestRegression3361);
    if (eprosima::fastdds::dds::RETCODE_OK != return_code_TestRegression3361)
    {
        StructTypeFlag struct_flags_TestRegression3361 = TypeObjectUtils::build_struct_type_flag(eprosima::fastdds::dds::xtypes::ExtensibilityKind::NOT_APPLIED,
                false, false);
        QualifiedTypeName type_name_TestRegression3361 = "TestRegression3361";
        eprosima::fastcdr::optional<AppliedBuiltinTypeAnnotations> type_ann_builtin_TestRegression3361;
        eprosima::fastcdr::optional<AppliedAnnotationSeq> ann_custom_TestRegression3361;
        CompleteTypeDetail detail_TestRegression3361 = TypeObjectUtils::build_complete_type_detail(type_ann_builtin_TestRegression3361, ann_custom_TestRegression3361, type_name_TestRegression3361.to_string());
        CompleteStructHeader header_TestRegression3361;
        header_TestRegression3361 = TypeObjectUtils::build_complete_struct_header(TypeIdentifier(), detail_TestRegression3361);
        CompleteStructMemberSeq member_seq_TestRegression3361;
        {
            TypeIdentifierPair type_ids_uuid;
            ReturnCode_t return_code_uuid {eprosima::fastdds::dds::RETCODE_OK};
            return_code_uuid =
                eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->type_object_registry().get_type_identifiers(
                "TestModule::MACHINEID", type_ids_uuid);

            if (eprosima::fastdds::dds::RETCODE_OK != return_code_uuid)
            {
                TestModule::register_MACHINEID_type_identifier(type_ids_uuid);
            }
            StructMemberFlag member_flags_uuid = TypeObjectUtils::build_struct_member_flag(eprosima::fastdds::dds::xtypes::TryConstructFailAction::DISCARD,
                    false, false, false, false);
            MemberId member_id_uuid = 0x00000000;
            bool common_uuid_ec {false};
            CommonStructMember common_uuid {TypeObjectUtils::build_common_struct_member(member_id_uuid, member_flags_uuid, TypeObjectUtils::retrieve_complete_type_identifier(type_ids_uuid, common_uuid_ec))};
            if (!common_uuid_ec)
            {
                EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION, "Structure uuid member TypeIdentifier inconsistent.");
                return;
            }
            MemberName name_uuid = "uuid";
            eprosima::fastcdr::optional<AppliedBuiltinMemberAnnotations> member_ann_builtin_uuid;
            ann_custom_TestRegression3361.reset();
            CompleteMemberDetail detail_uuid = TypeObjectUtils::build_complete_member_detail(name_uuid, member_ann_builtin_uuid, ann_custom_TestRegression3361);
            CompleteStructMember member_uuid = TypeObjectUtils::build_complete_struct_member(common_uuid, detail_uuid);
            TypeObjectUtils::add_complete_struct_member(member_seq_TestRegression3361, member_uuid);
        }
        CompleteStructType struct_type_TestRegression3361 = TypeObjectUtils::build_complete_struct_type(struct_flags_TestRegression3361, header_TestRegression3361, member_seq_TestRegression3361);
        if (eprosima::fastdds::dds::RETCODE_BAD_PARAMETER ==
                TypeObjectUtils::build_and_register_struct_type_object(struct_type_TestRegression3361, type_name_TestRegression3361.to_string(), type_ids_TestRegression3361))
        {
            EPROSIMA_LOG_ERROR(XTYPES_TYPE_REPRESENTATION,
                    "TestRegression3361 already registered in TypeObjectRegistry for a different type.");
        }
    }
}

