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
#include <parts/DeviceConnect.h>
#include <parts/Instance.h>
#include <parts/Gate.h>
#include <parts/Pin.h>

#include <GraphicsHelper.h>

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



TEST(PartsTest, OutputPositions)
{
    Symbols symbols;
    DeviceSets deviceSets;
    Parts parts;

    wxXmlDocument dom;

    auto cwd = wxGetCwd();

    ASSERT_TRUE(dom.Load(L"Tests/test-data/example-sch.sch"));

    auto root = dom.GetRoot();
    ASSERT_TRUE(symbols.XmlLoad(root));
    ASSERT_TRUE(deviceSets.XmlLoad(root, &symbols));
    ASSERT_TRUE(parts.XmlLoad(root, &deviceSets));

    const int WIDTH = 1000;
    const int HEIGHT = 1000;
    wxBitmap bitmap(WIDTH, HEIGHT);
    wxMemoryDC dc;
    dc.SelectObject(bitmap);

    wxBrush brush(*wxBLACK);
    dc.SetBrush(brush);

    dc.DrawRectangle(0, 0, WIDTH, HEIGHT);

    wxGraphicsContext *graphics = wxGraphicsContext::Create(dc);

    const double SCALE = 2.5;
    const double OffsetX = 70;
    const double OffsetY = 100;
    graphics->Scale(SCALE, SCALE);
    GraphicsHelper gh(graphics);

//    for(int x=10; x<1000; x+=100)
//    {
//        gh.CrossHair(x, x, 50, *wxRED, 2);
//    }

    for(auto part: parts)
    {
        for(auto instance: *part)
        {
            auto x = instance->GetX() + OffsetX;
            auto y = instance->GetY() + OffsetY;
            auto rot = instance->GetRot();
            gh.CrossHair(x, HEIGHT/SCALE - y, 5, *wxRED, 0.5);

            auto gate = instance->GetGate();
            for(auto connect: *gate)
            {
                auto pin = connect->GetPin();
                auto pinLoc = wxPoint2DDouble(pin->GetX(), pin->GetY());
                pinLoc = GraphicsHelper::Rotate(pinLoc, rot);

                gh.CrossHair(x+pinLoc.m_x, HEIGHT/SCALE - (y+pinLoc.m_y), 1.5, *wxGREEN, 0.5, true);

            }
        }
    }

    bitmap.SaveFile(L"parts.png", wxBITMAP_TYPE_PNG);

    delete graphics;
}
