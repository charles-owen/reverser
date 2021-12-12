/**
 * @file Pad.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Pad.h"

#include "../XmlHelper.h"


Pad::Pad(wxXmlNode* node)
{
    mName = node->GetAttribute(L"name");
    mX = XmlHelper::GetAttributeDouble(node, L"x", 0);
    mY = XmlHelper::GetAttributeDouble(node, L"y", 0);
    mDrill = XmlHelper::GetAttributeDouble(node, L"drill", 0);
    mDiameter = XmlHelper::GetAttributeDouble(node, L"diameter", 0);
    mShape = node->GetAttribute(L"shape", L"");
    mRotation = node->GetAttribute(L"rot",L"");
}
