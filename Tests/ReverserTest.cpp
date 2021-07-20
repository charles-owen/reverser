#include "gtest/gtest.h"
#include "Reverser.h"

TEST(ReverserTestSuite, Version)
{
    Reverser reverser(nullptr);
    EXPECT_EQ(reverser.Version(), wxString(L"0.01"));
}


