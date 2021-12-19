/**
 * @file Pin.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Pin.h"

#include "../XmlHelper.h"

Pin::Pin(wxXmlNode* node)
{
    mName = node->GetAttribute(L"name", L"").ToStdWstring();
    mX = XmlHelper::GetAttributeDouble(node, L"x", 0);
    mY = XmlHelper::GetAttributeDouble(node, L"y", 0);
}
