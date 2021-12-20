/**
 * @file PartsTest.cpp
 * @author Charles Owen
 */

#include <pch.h>
#include "gtest/gtest.h"
#include <parts/Symbols.h>
#include <parts/DeviceSets.h>
#include <parts/Parts.h>
#include <parts/Part.h>
#include <parts/Device.h>
#include <parts/Instance.h>
#include <parts/Gate.h>
#include <parts/Pin.h>

TEST(PartsTest, XmlLoad)
{
    Symbols symbols;
    DeviceSets deviceSets;
    Parts parts;

    wxXmlDocument dom;
    ASSERT_TRUE(dom.Load(L"Tests/test-data/example-sch.sch"));

    auto root = dom.GetRoot();
    ASSERT_TRUE(symbols.XmlLoad(root));
    ASSERT_TRUE(deviceSets.XmlLoad(root, &symbols));
    ASSERT_TRUE(parts.XmlLoad(root, &deviceSets));

    auto part = parts.Find(L"U2");
    auto device = part->GetDevice();

    ASSERT_EQ(L"", device->GetName());
    ASSERT_EQ(L"DIL40", device->GetPackageName());

    // A part with many instances
    // <instance part="U6" gate="A" x="147.32" y="205.74" smashed="yes">
    //    <attribute name="NAME" x="139.7" y="211.455" size="1.778" layer="95"/>
    //    <attribute name="VALUE" x="139.7" y="198.12" size="1.778" layer="96"/>
    // </instance>
    // <instance part="U6" gate="B" x="147.32" y="187.96" smashed="yes">
    //    <attribute name="NAME" x="139.7" y="193.675" size="1.778" layer="95"/>
    //    <attribute name="VALUE" x="139.7" y="180.34" size="1.778" layer="96"/>
    // </instance>
    // <instance part="U6" gate="P" x="-50.8" y="5.08" smashed="yes">
    //     <attribute name="NAME" x="-53.975" y="6.985" size="1.778" layer="95"/>
    // </instance>
    part = parts.Find(L"U6");
    auto pin1 = part->FindInstanceForPad(L"1");
    ASSERT_EQ(L"A", pin1.first->GetGate()->GetName());
    ASSERT_EQ(L"I0", pin1.second->GetName());

    auto pin2 = part->FindInstanceForPad(L"2");
    auto pin3 = part->FindInstanceForPad(L"3");
    auto pin4 = part->FindInstanceForPad(L"4");
    ASSERT_EQ(L"P", pin4.first->GetGate()->GetName());
    ASSERT_EQ(L"GND", pin4.second->GetName());

    auto pin5 = part->FindInstanceForPad(L"5");
    auto pin6 = part->FindInstanceForPad(L"6");
    auto pin7 = part->FindInstanceForPad(L"7");
    auto pin8 = part->FindInstanceForPad(L"8");
    ASSERT_EQ(L"P", pin8.first->GetGate()->GetName());
    ASSERT_EQ(L"VCC", pin8.second->GetName());

    auto pin9 = part->FindInstanceForPad(L"9");
    ASSERT_EQ(nullptr, pin9.first);
    ASSERT_EQ(nullptr, pin9.second);
}
