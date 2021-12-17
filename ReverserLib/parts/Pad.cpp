/**
 * @file Pad.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Pad.h"

#include "../XmlHelper.h"
#include "../GraphicsHelper.h"
#include "../pcb/PCBContext.h"
#include "Element.h"

const double LongWidth = 13;
const double LongLength = 29;

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

void Pad::Draw(wxGraphicsContext* graphics, PCBContext* context, Element* element)
{
    GraphicsHelper gh(graphics);
    gh.Place(mX, mY, mRot);
   // gh.CrossHair(mClicked.m_x, mClicked.m_y, 20, *wxBLUE);
    graphics->Scale(0.1, 0.1);

    // <pad name="1" x="-8.89" y="-3.81" drill="0.8128" shape="long" rot="R90"/>

    auto elementSelected = context->IsSelected(element);
    auto padSelected = elementSelected && context->IsSelected(this);

    auto brush = elementSelected ? wxGREEN_BRUSH : wxWHITE_BRUSH;
    if(padSelected)
    {
        brush = wxRED_BRUSH;
    }


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
        graphics->SetBrush(*brush);
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
        graphics->SetBrush(*brush);
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

bool Pad::Click(Element* element, PCBContext* context, const wxPoint2DDouble& point)
{
    // Convert coordinates to package local coordinates
    auto point1 = GraphicsHelper::InversePlace(point, mX, mY, mRot);
    auto distance = point1.GetVectorLength();
    auto x = point1.m_x;
    auto y = point1.m_y;

    auto hit = false;
    if(mShape == L"long")
    {
        hit = x >= -LongLength/20 && x <= LongLength/20 &&
                y >= -LongWidth/20 && y <= LongWidth/20;
    }
    else if(mDiameter > 0)
    {
        hit = distance < mDiameter;
    }

    if(hit)
    {
        context->Clicked(element, this);
        return true;
    }
//    if(distance < 5)
//    {
//        mClicked = point1;        return true;
//    }

    return false;
}
