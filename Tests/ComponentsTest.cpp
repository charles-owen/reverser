#include "gtest/gtest.h"

#include "components/Component.h"
#include "components/Components.h"

using namespace std;


TEST(ComponentsTestSuite, NextFree)
{
    // Initially empty collection
    Components components;

    EXPECT_EQ(components.NextFree(L"Q"), wstring(L"Q1"));

    // Create a new component
    auto component = make_shared<Component>();
    component->SetNumber(L"Q1");
    components.Add(component);

    EXPECT_EQ(components.NextFree(L"Q"), wstring(L"Q2"));

    component = make_shared<Component>();
    component->SetNumber(L"Q7");
    components.Add(component);

    EXPECT_EQ(components.NextFree(L"Q"), wstring(L"Q8"));

    // Create a new component
    component = make_shared<Component>();
    component->SetNumber(L"JP1");
    components.Add(component);

    EXPECT_EQ(components.NextFree(L"JP"), wstring(L"JP2"));
    EXPECT_EQ(components.NextFree(L"Q"), wstring(L"Q8"));

    component = make_shared<Component>();
    component->SetNumber(L"JP92");
    components.Add(component);

    EXPECT_EQ(components.NextFree(L"JP"), wstring(L"JP93"));
}