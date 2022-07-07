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
 * @file Key.cpp
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

#include "Key.h"
#include "KeyTypeObject.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

Key_TypeIntrospectionExample::Key_TypeIntrospectionExample()
{
    // m_instance_key com.eprosima.idl.parser.typecode.StringTypeCode@1442d7b5
    m_instance_key ="";
    // m_index com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1efee8e7
    m_index = 0;
    // m_value com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1ee807c6
    m_value = 0;

    // Just to register all known types
    registerKeyTypes();
}

Key_TypeIntrospectionExample::~Key_TypeIntrospectionExample()
{



}

Key_TypeIntrospectionExample::Key_TypeIntrospectionExample(
        const Key_TypeIntrospectionExample& x)
{
    m_instance_key = x.m_instance_key;
    m_index = x.m_index;
    m_value = x.m_value;
}

Key_TypeIntrospectionExample::Key_TypeIntrospectionExample(
        Key_TypeIntrospectionExample&& x)
{
    m_instance_key = std::move(x.m_instance_key);
    m_index = x.m_index;
    m_value = x.m_value;
}

Key_TypeIntrospectionExample& Key_TypeIntrospectionExample::operator =(
        const Key_TypeIntrospectionExample& x)
{

    m_instance_key = x.m_instance_key;
    m_index = x.m_index;
    m_value = x.m_value;

    return *this;
}

Key_TypeIntrospectionExample& Key_TypeIntrospectionExample::operator =(
        Key_TypeIntrospectionExample&& x)
{

    m_instance_key = std::move(x.m_instance_key);
    m_index = x.m_index;
    m_value = x.m_value;

    return *this;
}

bool Key_TypeIntrospectionExample::operator ==(
        const Key_TypeIntrospectionExample& x) const
{

    return (m_instance_key == x.m_instance_key && m_index == x.m_index && m_value == x.m_value);
}

bool Key_TypeIntrospectionExample::operator !=(
        const Key_TypeIntrospectionExample& x) const
{
    return !(*this == x);
}

size_t Key_TypeIntrospectionExample::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

size_t Key_TypeIntrospectionExample::getCdrSerializedSize(
        const Key_TypeIntrospectionExample& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.instance_key().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);



    return current_alignment - initial_alignment;
}

void Key_TypeIntrospectionExample::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_instance_key;
    scdr << m_index;
    scdr << m_value;

}

void Key_TypeIntrospectionExample::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_instance_key;
    dcdr >> m_index;
    dcdr >> m_value;
}

/*!
 * @brief This function copies the value in member instance_key
 * @param _instance_key New value to be copied in member instance_key
 */
void Key_TypeIntrospectionExample::instance_key(
        const std::string& _instance_key)
{
    m_instance_key = _instance_key;
}

/*!
 * @brief This function moves the value in member instance_key
 * @param _instance_key New value to be moved in member instance_key
 */
void Key_TypeIntrospectionExample::instance_key(
        std::string&& _instance_key)
{
    m_instance_key = std::move(_instance_key);
}

/*!
 * @brief This function returns a constant reference to member instance_key
 * @return Constant reference to member instance_key
 */
const std::string& Key_TypeIntrospectionExample::instance_key() const
{
    return m_instance_key;
}

/*!
 * @brief This function returns a reference to member instance_key
 * @return Reference to member instance_key
 */
std::string& Key_TypeIntrospectionExample::instance_key()
{
    return m_instance_key;
}
/*!
 * @brief This function sets a value in member index
 * @param _index New value for member index
 */
void Key_TypeIntrospectionExample::index(
        uint32_t _index)
{
    m_index = _index;
}

/*!
 * @brief This function returns the value of member index
 * @return Value of member index
 */
uint32_t Key_TypeIntrospectionExample::index() const
{
    return m_index;
}

/*!
 * @brief This function returns a reference to member index
 * @return Reference to member index
 */
uint32_t& Key_TypeIntrospectionExample::index()
{
    return m_index;
}

/*!
 * @brief This function sets a value in member value
 * @param _value New value for member value
 */
void Key_TypeIntrospectionExample::value(
        int32_t _value)
{
    m_value = _value;
}

/*!
 * @brief This function returns the value of member value
 * @return Value of member value
 */
int32_t Key_TypeIntrospectionExample::value() const
{
    return m_value;
}

/*!
 * @brief This function returns a reference to member value
 * @return Reference to member value
 */
int32_t& Key_TypeIntrospectionExample::value()
{
    return m_value;
}


size_t Key_TypeIntrospectionExample::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;


     current_align += 4 + eprosima::fastcdr::Cdr::alignment(current_align, 4) + 255 + 1;
     



    return current_align;
}

bool Key_TypeIntrospectionExample::isKeyDefined()
{
    return true;
}

void Key_TypeIntrospectionExample::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
     scdr << m_instance_key;
        
}
