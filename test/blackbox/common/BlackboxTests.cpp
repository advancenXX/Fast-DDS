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

#include "BlackboxTests.hpp"

#include <cstdlib>
#include <memory>
#include <string>
#include <thread>

#include <gtest/gtest.h>

#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/log/Log.hpp>
#include <fastdds/LibrarySettings.hpp>
#include <fastdds/rtps/RTPSDomain.h>

using namespace eprosima::fastdds;
using namespace eprosima::fastdds::rtps;

//#define cout "Use Log instead!"

const char* certs_path = nullptr;
uint16_t global_port = 0;
bool enable_datasharing;
bool use_pull_mode;
bool use_udpv4;
bool use_ipv6;

uint16_t get_port()
{
    uint16_t port = static_cast<uint16_t>(GET_PID());

    if (5000 > port)
    {
        port += 5000;
    }

    std::cout << "Generating port " << port << std::endl;
    return port;
}

class BlackboxEnvironment : public ::testing::Environment
{
public:

    void SetUp()
    {
        global_port = get_port();

        // Blackbox tests were designed with the assumption that intraprocess
        // and datasharing are both disabled. Most of them use TEST_P in order to
        // test with and without intraprocess and datasharing, but those who test
        // conditions related to network packets being lost should not use intraprocess
        // nor datasharing. Setting it off here ensures that intraprocess and
        // datasharing are only tested when required.
        eprosima::fastdds::LibrarySettings att;
        att.intraprocess_delivery = eprosima::fastdds::INTRAPROCESS_OFF;
        eprosima::fastdds::dds::DomainParticipantFactory::get_instance()->set_library_settings(att);
        enable_datasharing = false;
        use_pull_mode = false;
        use_udpv4 = true;
        use_ipv6 = false;

        //Log::SetVerbosity(eprosima::fastdds::dds::Log::Info);
        //Log::SetCategoryFilter(std::regex("(SECURITY)"));
    }

    void TearDown()
    {
        //Log::Reset();
        eprosima::fastdds::dds::Log::KillThread();
        // Please, do not remove RTPSDomain before DomainParticipantFactory
    }

};

int main(
        int argc,
        char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    testing::AddGlobalTestEnvironment(new BlackboxEnvironment);

    if (!::testing::GTEST_FLAG(list_tests))
    {
#if HAVE_SECURITY
        blackbox_security_init();
#endif // if HAVE_SECURITY
#if TLS_FOUND
        tls_init();
#endif // if TLS_FOUND
    }

    return RUN_ALL_TESTS();
}
