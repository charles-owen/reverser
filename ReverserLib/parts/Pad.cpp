/**
 * @file Pad.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Pad.h"

#include "../XmlHelper.h"
#include "../GraphicsHelper.h"

Pad::Pad(wxXmlNode* node)
{
    mName = node->GetAttribute(L"name");
    mX = XmlHelper::GetAttributeDouble(node, L"x", 0);
    mY = XmlHelper::GetAttributeDouble(node, L"y", 0);
    mDrill = XmlHelper::GetAttributeDouble(node, L"drill", 0);
    mDiameter = XmlHelper::GetAttributeDouble(node, L"diameter", 0);
    mShape = node->GetAttribute(L"shape", L"");
    mRot = node->GetAttribute(L"rot",L"");
}

void Pad::Draw(wxGraphicsContext* graphics)
{
    GraphicsHelper gh(graphics);
    gh.Place(mX, mY, mRot);
    graphics->Scale(0.1, 0.1);

    // <pad name="1" x="-8.89" y="-3.81" drill="0.8128" shape="long" rot="R90"/>

    if(mShape == L"long")
    {
        if(mPathLong.IsNull())
        {
            mPathLong = graphics->CreatePath();
            mPathLong.MoveToPoint(10,6);
            mPathLong.AddLineToPoint(14, 4);
            mPathLong.AddLineToPoint(16, 0);
            mPathLong.AddLineToPoint(14, -4);
            mPathLong.AddLineToPoint(10, -6);
            mPathLong.AddLineToPoint(-10, -6);
            mPathLong.AddLineToPoint(-14, -4);
            mPathLong.AddLineToPoint(-16, 0);
            mPathLong.AddLineToPoint(-14, 4);
            mPathLong.AddLineToPoint(-10, 6);
            mPathLong.CloseSubpath();
        }

        // Draw the pad
        graphics->SetBrush(*wxWHITE_BRUSH);
        graphics->FillPath(mPathLong);

        // Draw a crosshair on the pad
        if(mName == L"1")
        {
            graphics->SetPen(*wxRED_PEN);
        }
        else
        {
            graphics->SetPen(*wxBLACK_PEN);
        }

        graphics->StrokeLine(-10, 0, 10, 0);
        graphics->StrokeLine(0, 6, 0, -6);
    }
    else if(mDiameter > 0)
    {
        // <pad name="1" x="-7.62" y="24.13" drill="0.7434" diameter="1.3434"/>
        auto d2 = mDiameter * 5;
        graphics->SetBrush(*wxWHITE_BRUSH);
        graphics->SetPen(*wxTRANSPARENT_PEN);
        graphics->DrawEllipse(-d2, -d2, d2 * 2, d2 * 2);

        // Draw a crosshair on the pad
        if(mName == L"1")
        {
            graphics->SetPen(*wxRED_PEN);
        }
        else
        {
            graphics->SetPen(*wxBLACK_PEN);
        }

        graphics->StrokeLine(-d2, 0, d2, 0);
        graphics->StrokeLine(0, d2, 0, -d2);
    }

    graphics->Scale(10, 10);
    gh.UnPlace();
}
