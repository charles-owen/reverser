/**
 * @file PackagesTest.cpp
 * @author Charles Owen
 */

#include <pch.h>
#include "gtest/gtest.h"

#include <parts/Packages.h>

TEST(PackagesTest, XmlLoad){
    Packages packages;

    wxXmlDocument dom;
    ASSERT_TRUE(dom.Load(L"Tests/test-data/example-brd.brd"));

    auto root = dom.GetRoot();
    ASSERT_TRUE(packages.XmlLoad(root));

    ASSERT_NE(nullptr, packages.Find(L"owen-library", L"DIL16"));
}
