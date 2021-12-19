/**
 * @file DeviceSetsTests.cpp
 * @author Charles Owen
 */

#include <pch.h>
#include "gtest/gtest.h"

#include <parts/Symbols.h>
#include <parts/DeviceSets.h>
#include <parts/DeviceSet.h>
#include <parts/Device.h>
#include <parts/Symbol.h>
#include <parts/Gate.h>

TEST(DeviceSetsTest, XmlLoad){
    Symbols symbols;
    DeviceSets deviceSets;

    wxXmlDocument dom;
    ASSERT_TRUE(dom.Load(L"Tests/test-data/example-sch.sch"));

    auto root = dom.GetRoot();
    ASSERT_TRUE(symbols.XmlLoad(root));
    ASSERT_TRUE(deviceSets.XmlLoad(root, &symbols));

    auto deviceSet = deviceSets.Find(L"owen-library", L"HD6821P");
    ASSERT_EQ(L"HD6821P", deviceSet->GetName());
    ASSERT_EQ(L"owen-library", deviceSet->GetLibrary());

    auto gate = deviceSet->FindGate(L"1");
    ASSERT_EQ(L"1", gate->GetName());

    auto symbol = gate->GetSymbol();
    ASSERT_EQ(L"HD6821P", symbol->GetName());

    deviceSet = deviceSets.Find(L"owen-library", L"SN15836");
    ASSERT_EQ(L"SN15836", deviceSet->GetName());

    auto device = deviceSet->FindDevice(L"N");
    ASSERT_EQ(L"N", device->GetName());

    gate = device->GateForPad(L"4");
    ASSERT_EQ(L"B", gate->GetName());
}
