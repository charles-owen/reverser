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

