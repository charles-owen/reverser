#include "gtest/gtest.h"

#include "save/Component.h"

using namespace std;

TEST(ComponentTestSuite, GetPrefix)
{
    Component component;
    component.SetNumber(L"Q1");
    EXPECT_EQ(component.GetPrefix(), wstring(L"Q"));

    component.SetNumber(L"JP23");
    EXPECT_EQ(component.GetPrefix(), wstring(L"JP"));
}

TEST(ComponentTestSuite, GetNumberNumber)
{
    Component component;
    component.SetNumber(L"Q1");
    EXPECT_EQ(component.GetNumberNumber(), 1);

    component.SetNumber(L"JP23");
    EXPECT_EQ(component.GetNumberNumber(), 23);
}

TEST(ComponentTestSuite, IsValidNumber)
{
    EXPECT_TRUE(Component::IsValidNumber(L"Q1"));
    EXPECT_TRUE(Component::IsValidNumber(L"JP22"));
    EXPECT_FALSE(Component::IsValidNumber(L""));
    EXPECT_FALSE(Component::IsValidNumber(L"2"));
    EXPECT_FALSE(Component::IsValidNumber(L"JP"));
    EXPECT_FALSE(Component::IsValidNumber(L"Q"));
    EXPECT_FALSE(Component::IsValidNumber(L"99"));
}
