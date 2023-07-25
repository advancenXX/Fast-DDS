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
 * @file FixedSized.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_FIXEDSIZED_H_
#define _FAST_DDS_GENERATED_FIXEDSIZED_H_


#include <fastcdr/cdr/fixed_size_string.hpp>
#include <fastcdr/xcdr/optional.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(FIXEDSIZED_SOURCE)
#define FIXEDSIZED_DllAPI __declspec( dllexport )
#else
#define FIXEDSIZED_DllAPI __declspec( dllimport )
#endif // FIXEDSIZED_SOURCE
#else
#define FIXEDSIZED_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define FIXEDSIZED_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the structure FixedSized defined by the user in the IDL file.
 * @ingroup FixedSized
 */
class FixedSized
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport FixedSized();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~FixedSized();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object FixedSized that will be copied.
     */
    eProsima_user_DllExport FixedSized(
            const FixedSized& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object FixedSized that will be copied.
     */
    eProsima_user_DllExport FixedSized(
            FixedSized&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object FixedSized that will be copied.
     */
    eProsima_user_DllExport FixedSized& operator =(
            const FixedSized& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object FixedSized that will be copied.
     */
    eProsima_user_DllExport FixedSized& operator =(
            FixedSized&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x FixedSized object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const FixedSized& x) const;

    /*!
     * @brief Comparison operator.
     * @param x FixedSized object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const FixedSized& x) const;

    /*!
     * @brief This function sets a value in member index
     * @param _index New value for member index
     */
    eProsima_user_DllExport void index(
            uint16_t _index);

    /*!
     * @brief This function returns the value of member index
     * @return Value of member index
     */
    eProsima_user_DllExport uint16_t index() const;

    /*!
     * @brief This function returns a reference to member index
     * @return Reference to member index
     */
    eProsima_user_DllExport uint16_t& index();



private:

    uint16_t m_index{0};

};

#endif // _FAST_DDS_GENERATED_FIXEDSIZED_H_

