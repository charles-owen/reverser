#include "gtest/gtest.h"
#include "components/Layout.h"

TEST(LayoutTestSuite, Load)
{
    Layout layout;

    EXPECT_TRUE(layout.Load(L"Tests/test-lib/", L"connector-9pin", true));
    EXPECT_EQ(layout.NumPins(), 9);
}

