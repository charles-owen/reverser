/**
 * @file ElementsTest.cpp
 * @author Charles Owen
 */

#include <pch.h>
#include "gtest/gtest.h"

#include <parts/Packages.h>
#include <parts/Elements.h>
#include <parts/Element.h>

TEST(ElementsTest, XmlLoad){
    Packages packages;
    Elements elements;

    wxXmlDocument dom;
    ASSERT_TRUE(dom.Load(L"Tests/test-data/example-brd.brd"));

    // First load the packages
    auto root = dom.GetRoot();
    ASSERT_TRUE(packages.XmlLoad(root));

    // Now load the elements
    ASSERT_TRUE(elements.XmlLoad(root, &packages));

    auto j1 = elements.Find(L"J1");
    ASSERT_EQ(L"J1", j1->GetName());
}
