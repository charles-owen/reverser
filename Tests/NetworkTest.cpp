#include "gtest/gtest.h"

#include "network/Network.h"

using namespace std;


TEST(ComponentTestSuite, GetNumber)
{
    Network network;
    network.SetName(L"NET012");
    EXPECT_EQ(network.GetNumber(), 12);

    network.SetName(L"+5 V");
    EXPECT_EQ(network.GetNumber(), 0);

}

