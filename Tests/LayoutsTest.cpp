#include "gtest/gtest.h"
#include "save/Layouts.h"
#include "save/Layout.h"

TEST(LayoutsTestSuite, Load)
{
    Layouts layouts;

    EXPECT_TRUE(layouts.Load(L"Tests/test-lib/", true));
    EXPECT_EQ(layouts.NumLayouts(), 2);
    EXPECT_EQ(layouts.Get(L"connector-9pin")->GetName(), L"connector-9pin");
    EXPECT_EQ(layouts.Get(L"box-2-18")->GetName(), L"box-2-18");
    EXPECT_EQ(layouts.Get(L"nothing"), nullptr);
}


