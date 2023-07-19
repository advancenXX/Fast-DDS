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
 * @file Benchmark.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "Benchmark.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


BenchMark::BenchMark()
{

}

BenchMark::~BenchMark()
{
}

BenchMark::BenchMark(
        const BenchMark& x)
{
    m_index = x.m_index;
}

BenchMark::BenchMark(
        BenchMark&& x) noexcept 
{
    m_index = x.m_index;
}

BenchMark& BenchMark::operator =(
        const BenchMark& x)
{

    m_index = x.m_index;

    return *this;
}

BenchMark& BenchMark::operator =(
        BenchMark&& x) noexcept
{

    m_index = x.m_index;

    return *this;
}

bool BenchMark::operator ==(
        const BenchMark& x) const
{

    return (m_index == x.m_index);
}

bool BenchMark::operator !=(
        const BenchMark& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function sets a value in member index
 * @param _index New value for member index
 */
void BenchMark::index(
        uint32_t _index)
{
    m_index = _index;
}

/*!
 * @brief This function returns the value of member index
 * @return Value of member index
 */
uint32_t BenchMark::index() const
{
    return m_index;
}

/*!
 * @brief This function returns a reference to member index
 * @return Reference to member index
 */
uint32_t& BenchMark::index()
{
    return m_index;
}



#include "BenchmarkCdrAux.ipp"