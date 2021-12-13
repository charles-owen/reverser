/**
 * @file Attribute.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Attribute.h"
#include "../XmlHelper.h"
#include "../GraphicsHelper.h"
#include "Element.h"

//
//                 <element name="J1" library="owen-library"
//                         library_urn="urn:adsk.wipprod:fs.file:vf.frPKTRgnS7OtKRM0piDRaQ" package="DIL16"
//                         value="DIP16SOCKET" x="33.02" y="85.09" smashed="yes" rot="R90">
//                    <attribute name="NAME" x="22.5093" y="85.09" size="1.27" layer="25" rot="R90"
//                               align="bottom-center"/>
//                    <attribute name="VALUE" x="43.5307" y="85.09" size="1.27" layer="27" rot="R90" align="top-center"/>
//                </element>
//

Attribute::Attribute(wxXmlNode* node) : mNode(node)
{
    mName = node->GetAttribute(L"name");
    mRot = node->GetAttribute(L"rot");
    mAlign = node->GetAttribute(L"align");
    mX = XmlHelper::GetAttributeDouble(node, L"x", 0);
    mY = XmlHelper::GetAttributeDouble(node, L"y", 0);
    mSize = XmlHelper::GetAttributeDouble(node, L"size", 1);
    mLayer = XmlHelper::GetAttributeInt(node, L"layer", 0);

    auto display = node->GetAttribute(L"display", L"on");
    mDisplay = display == L"on";
}

void Attribute::Draw(wxGraphicsContext* graphics, Element* element)
{
    if(!mDisplay)
    {
        return;
    }

    GraphicsHelper gh(graphics);
    gh.Place(mX, mY, mRot);
    gh.CrossHair(0,0, 2, *wxGREEN);
    graphics->Scale(0.1, 0.1);

    bool invert = mRot == L"R180" || mRot == L"R270";

    wxFont font(wxSize(0, (int)(mSize * 20)),
            wxFONTFAMILY_SWISS,
            wxFONTSTYLE_NORMAL,
            wxFONTWEIGHT_NORMAL);
    graphics->SetFont(font, *wxRED);

    std::wstring text;

    if(mName == L"NAME")
    {
        text = element->GetName();
    }
    else if(mName == L"VALUE")
    {
        text = element->GetValue();
    }

    // Align values:
    // align="bottom-center"
    // align="top-center"
    if(!text.empty())
    {
        if(mAlign == L"bottom-center")
        {
            gh.DrawCartesianText(text, 0, 0, GraphicsHelper::Horizontal::CENTER,
                    GraphicsHelper::Vertical::BOTTOM, invert);
        }
        else if(mAlign == L"top-center")
        {
            gh.DrawCartesianText(text, 0, 0, GraphicsHelper::Horizontal::CENTER,
                    GraphicsHelper::Vertical::TOP, invert);
        }
        else
        {
            gh.DrawCartesianText(text, 0, 0, GraphicsHelper::Horizontal::LEFT,
                    GraphicsHelper::Vertical::BOTTOM, invert);
        }
    }





    gh.UnPlace();
}
