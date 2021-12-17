/**
 * @file Element.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Element.h"

#include "Packages.h"
#include "Package.h"
#include "Attribute.h"

#include "../XmlHelper.h"
#include "../GraphicsHelper.h"
#include "../pcb/PCBContext.h"

//
//                 <element name="J1" library="owen-library"
//                         library_urn="urn:adsk.wipprod:fs.file:vf.frPKTRgnS7OtKRM0piDRaQ" package="DIL16"
//                         value="DIP16SOCKET" x="33.02" y="85.09" smashed="yes" rot="R90">
//                    <attribute name="NAME" x="22.5093" y="85.09" size="1.27" layer="25" rot="R90"
//                               align="bottom-center"/>
//                    <attribute name="VALUE" x="43.5307" y="85.09" size="1.27" layer="27" rot="R90" align="top-center"/>
//                </element>
//

/**
 *
 * @param node
 * @param packages
 */
Element::Element(wxXmlNode* node, Packages* packages) : mNode(node)
{
    mName = node->GetAttribute(L"name");
    mValue = node->GetAttribute(L"value");
    mX = XmlHelper::GetAttributeDouble(node, L"x", 0);
    mY = XmlHelper::GetAttributeDouble(node, L"y", 0);
    mRot = node->GetAttribute(L"rot");
    mSmashed = node->GetAttribute(L"smashed", L"");

    auto library = node->GetAttribute(L"library");
    auto package = node->GetAttribute(L"package");
    mPackage = packages->Find(library.ToStdWstring(), package.ToStdWstring());

    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"attribute")
        {
            mAttributes.push_back(std::make_shared<Attribute>(child));
        }
    }
}

void Element::Draw(wxGraphicsContext* graphics,  PCBContext* context, int pcbWidth, int pcbHeight)
{
    GraphicsHelper gh(graphics);

    auto x = mX;
    auto y = mY;

//    wxFont font(wxSize(0, 5),
//            wxFONTFAMILY_SWISS,
//            wxFONTSTYLE_NORMAL,
//            wxFONTWEIGHT_NORMAL);
//    graphics->SetFont(font, *wxWHITE);
//
//    gh.DrawCartesianText(mName, x, y);

    gh.Place(x, y, mRot);
    if(mPackage != nullptr)
    {
        mPackage->Draw(graphics, context, this);
    }
    gh.UnPlace();

    for(auto attribute: mAttributes)
    {
        attribute->Draw(graphics, this);
    }
}


/**
 * Handle mouse clicks (mouse down)
 * @param context PCB editor context.
 */
bool Element::Click(PCBContext* context, const wxPoint2DDouble &point)
{
    // Convert coordinates to package local coordinates
    auto point1 = GraphicsHelper::InversePlace(point, mX, mY, mRot);
    if(mPackage != nullptr)
    {
        return mPackage->Click(this, context, point1);
    }

    return false;
}

void Element::Move(const wxPoint2DDouble &delta)
{
    mX += delta.m_x;
    mY += delta.m_y;

    XmlHelper::SetAttributeDouble(mNode, L"x", mX);
    XmlHelper::SetAttributeDouble(mNode, L"y", mY);

    for(auto attribute: mAttributes)
    {
        attribute->Move(delta);
    }
}
