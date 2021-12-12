/**
 * @file Attribute.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Attribute.h"
#include "../XmlHelper.h"

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
}
