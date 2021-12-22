/**
 * @file NetsTest.cpp
 * @author Charles Owen
 */
 
#include <pch.h>
#include "gtest/gtest.h"
#include <parts/Symbols.h>
#include <parts/DeviceSets.h>
#include <parts/Parts.h>
#include <network/Nets.h>
#include <network/Net.h>
#include <network/PinRef.h>

TEST(NetsTest, XmlLoad)
{
    Symbols symbols;
    DeviceSets deviceSets;
    Parts parts;
    Nets nets;

    wxXmlDocument dom;

    ASSERT_TRUE(dom.Load(L"Tests/test-data/example-sch.sch"));

    auto root = dom.GetRoot();
    ASSERT_TRUE(symbols.XmlLoad(root));
    ASSERT_TRUE(deviceSets.XmlLoad(root, &symbols));
    ASSERT_TRUE(parts.XmlLoad(root, &deviceSets));
    ASSERT_TRUE(nets.XmlLoad(root, &parts));

    auto bad = nets.Find(L"*bad*");
    ASSERT_EQ(nullptr, bad);

    bad = nets.Find(L"ZZZZZZ");
    ASSERT_EQ(nullptr, bad);

    auto n13 = nets.Find(L"N$13");
    ASSERT_EQ(L"N$13", n13->GetName());

    auto n1 = nets.Find(L"N$1");
    ASSERT_EQ(L"N$1", n1->GetName());

    auto pinRefs = n1->GetPinRefs();
    ASSERT_EQ(3, pinRefs.size());

    auto p1 = pinRefs[0];
    auto p1pad = p1->GetPadName();
    ASSERT_EQ(L"9", p1pad);

    for(auto net: nets)
    {
        std::cout << net->GetName() << std::endl;
    }
}

