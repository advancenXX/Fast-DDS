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
 * @file monitorservice_typesTypeObjectSupport.hpp
 * Header file containing the API required to register the TypeObject representation of the described types in the IDL file
 *
 * This file was generated by the tool fastddsgen.
 */

#ifndef _FAST_DDS_GENERATED_EPROSIMA_FASTDDS_STATISTICS_MONITORSERVICE_TYPES_TYPE_OBJECT_SUPPORT_HPP_
#define _FAST_DDS_GENERATED_EPROSIMA_FASTDDS_STATISTICS_MONITORSERVICE_TYPES_TYPE_OBJECT_SUPPORT_HPP_

#include <fastdds/dds/xtypes/type_representation/TypeObject.hpp>

#include "typesTypeObjectSupport.hpp"

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC

namespace eprosima {
namespace fastdds {
namespace statistics {
/**
 * @brief Register Connection related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_Connection_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifier& type_id);

/**
 * @brief Register QosPolicyCount_s related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_QosPolicyCount_s_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifier& type_id);

/**
 * @brief Register BaseStatus_s related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_BaseStatus_s_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifier& type_id);


/**
 * @brief Register IncompatibleQoSStatus_s related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_IncompatibleQoSStatus_s_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifier& type_id);

/**
 * @brief Register LivelinessChangedStatus_s related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_LivelinessChangedStatus_s_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifier& type_id);

/**
 * @brief Register DeadlineMissedStatus_s related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_DeadlineMissedStatus_s_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifier& type_id);




namespace StatusKind {
} // namespace StatusKind

/**
 * @brief Register MonitorServiceData related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_MonitorServiceData_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifier& type_id);

/**
 * @brief Register MonitorServiceStatusData related TypeIdentifier.
 *        Fully-descriptive TypeIdentifiers are directly registered.
 *        Hash TypeIdentifiers require to fill the TypeObject information and hash it, consequently, the TypeObject is
 *        indirectly registered as well.
 *
 * @param[out] TypeIdentifier of the registered type.
 *             The returned TypeIdentifier corresponds to the complete TypeIdentifier in case of hashed TypeIdentifiers.
 *             Invalid TypeIdentifier is returned in case of error.
 */
eProsima_user_DllExport void register_MonitorServiceStatusData_type_identifier(
        eprosima::fastdds::dds::xtypes::TypeIdentifier& type_id);

} // namespace statistics

} // namespace fastdds

} // namespace eprosima


#endif // DOXYGEN_SHOULD_SKIP_THIS_PUBLIC

#endif // _FAST_DDS_GENERATED_EPROSIMA_FASTDDS_STATISTICS_MONITORSERVICE_TYPES_TYPE_OBJECT_SUPPORT_HPP_
