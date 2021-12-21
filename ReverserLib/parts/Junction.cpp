/**
 * @file Junction.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Junction.h"

#include "../XmlHelper.h"

Junction::Junction(wxXmlNode* node)
{
    mX = XmlHelper::GetAttributeDouble(node, L"x", 0);
    mY = XmlHelper::GetAttributeDouble(node, L"y", 0);
}
