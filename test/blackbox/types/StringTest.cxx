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
 * @file StringTest.cpp
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

#include "StringTest.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


StringTest::StringTest()
{

}

StringTest::~StringTest()
{
}

StringTest::StringTest(
        const StringTest& x)
{
    m_message = x.m_message;
}

StringTest::StringTest(
        StringTest&& x) noexcept 
{
    m_message = std::move(x.m_message);
}

StringTest& StringTest::operator =(
        const StringTest& x)
{

    m_message = x.m_message;

    return *this;
}

StringTest& StringTest::operator =(
        StringTest&& x) noexcept
{

    m_message = std::move(x.m_message);

    return *this;
}

bool StringTest::operator ==(
        const StringTest& x) const
{

    return (m_message == x.m_message);
}

bool StringTest::operator !=(
        const StringTest& x) const
{
    return !(*this == x);
}

/*!
 * @brief This function copies the value in member message
 * @param _message New value to be copied in member message
 */
void StringTest::message(
        const eprosima::fastcdr::fixed_string<10000>& _message)
{
    m_message = _message;
}

/*!
 * @brief This function moves the value in member message
 * @param _message New value to be moved in member message
 */
void StringTest::message(
        eprosima::fastcdr::fixed_string<10000>&& _message)
{
    m_message = std::move(_message);
}

/*!
 * @brief This function returns a constant reference to member message
 * @return Constant reference to member message
 */
const eprosima::fastcdr::fixed_string<10000>& StringTest::message() const
{
    return m_message;
}

/*!
 * @brief This function returns a reference to member message
 * @return Reference to member message
 */
eprosima::fastcdr::fixed_string<10000>& StringTest::message()
{
    return m_message;
}



#include "StringTestCdrAux.ipp"