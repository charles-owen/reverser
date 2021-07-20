#include "gtest/gtest.h"

#include "network/Network.h"
#include "network/Networks.h"

using namespace std;


TEST(NetworksTestSuite, NextFree)
{
    Networks networks;
    EXPECT_EQ(networks.NextFreeName(), L"NET001");
}