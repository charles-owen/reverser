/**
 * @file Text.cpp
 * @author Charles Owen
 */

#include "Text.h"

#include "../XmlHelper.h"
#include "../GraphicsHelper.h"

/**
 * <text x="-9.271" y="-3.048" size="1.27" layer="25" ratio="10" rot="R90">&gt;NAME</text>
 * @param node
 */
Text::Text(wxXmlNode* node)
{
    mX = XmlHelper::GetAttributeDouble(node, L"x", 0);
    mY = XmlHelper::GetAttributeDouble(node, L"y", 0);
    mSize = XmlHelper::GetAttributeDouble(node, L"size", 1);
    mRot = node->GetAttribute(L"rot",L"");
    mLayer = XmlHelper::GetAttributeInt(node, L"layer", 0);
    auto text = node->GetNodeContent();
    text.Replace(L"&gt;", L">");
    text.Replace(L"&lt;", L">");
    mText = text.ToStdWstring();
}

void Text::Draw(wxGraphicsContext* graphics)
{
//    GraphicsHelper gh(graphics);
//    gh.Place(mX, mY, mRot);
//    graphics->Scale(0.1, 0.1);
//
//    wxFont font(wxSize(0, (int)(mSize * 10)),
//            wxFONTFAMILY_SWISS,
//            wxFONTSTYLE_NORMAL,
//            wxFONTWEIGHT_NORMAL);
//    graphics->SetFont(font, *wxRED);
//
//    gh.DrawCartesianText(mText, 0, 0);
//
//    gh.UnPlace();
}

