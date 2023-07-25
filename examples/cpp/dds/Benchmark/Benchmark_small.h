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
 * @file Benchmark_small.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_BENCHMARK_SMALL_H_
#define _FAST_DDS_GENERATED_BENCHMARK_SMALL_H_


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
#if defined(BENCHMARK_SMALL_SOURCE)
#define BENCHMARK_SMALL_DllAPI __declspec( dllexport )
#else
#define BENCHMARK_SMALL_DllAPI __declspec( dllimport )
#endif // BENCHMARK_SMALL_SOURCE
#else
#define BENCHMARK_SMALL_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define BENCHMARK_SMALL_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
class CdrSizeCalculator;} // namespace fastcdr
} // namespace eprosima


/*!
 * @brief This class represents the structure BenchMarkSmall defined by the user in the IDL file.
 * @ingroup Benchmark_small
 */
class BenchMarkSmall
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport BenchMarkSmall();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~BenchMarkSmall();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object BenchMarkSmall that will be copied.
     */
    eProsima_user_DllExport BenchMarkSmall(
            const BenchMarkSmall& x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object BenchMarkSmall that will be copied.
     */
    eProsima_user_DllExport BenchMarkSmall(
            BenchMarkSmall&& x) noexcept;

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object BenchMarkSmall that will be copied.
     */
    eProsima_user_DllExport BenchMarkSmall& operator =(
            const BenchMarkSmall& x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object BenchMarkSmall that will be copied.
     */
    eProsima_user_DllExport BenchMarkSmall& operator =(
            BenchMarkSmall&& x) noexcept;

    /*!
     * @brief Comparison operator.
     * @param x BenchMarkSmall object to compare.
     */
    eProsima_user_DllExport bool operator ==(
            const BenchMarkSmall& x) const;

    /*!
     * @brief Comparison operator.
     * @param x BenchMarkSmall object to compare.
     */
    eProsima_user_DllExport bool operator !=(
            const BenchMarkSmall& x) const;

    /*!
     * @brief This function copies the value in member array
     * @param _array New value to be copied in member array
     */
    eProsima_user_DllExport void array(
            const std::array<char, 16384>& _array);

    /*!
     * @brief This function moves the value in member array
     * @param _array New value to be moved in member array
     */
    eProsima_user_DllExport void array(
            std::array<char, 16384>&& _array);

    /*!
     * @brief This function returns a constant reference to member array
     * @return Constant reference to member array
     */
    eProsima_user_DllExport const std::array<char, 16384>& array() const;

    /*!
     * @brief This function returns a reference to member array
     * @return Reference to member array
     */
    eProsima_user_DllExport std::array<char, 16384>& array();
    /*!
     * @brief This function sets a value in member index
     * @param _index New value for member index
     */
    eProsima_user_DllExport void index(
            uint32_t _index);

    /*!
     * @brief This function returns the value of member index
     * @return Value of member index
     */
    eProsima_user_DllExport uint32_t index() const;

    /*!
     * @brief This function returns a reference to member index
     * @return Reference to member index
     */
    eProsima_user_DllExport uint32_t& index();




private:

    std::array<char, 16384> m_array{0};
    uint32_t m_index{0};

};

#endif // _FAST_DDS_GENERATED_BENCHMARK_SMALL_H_

