/**
 * @file Package.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Package.h"
#include "../parts/Pad.h"
#include "../parts/Wire.h"
#include "../parts/Text.h"
#include "../GraphicsHelper.h"

Package::Package(wxXmlNode* node, const std::wstring& libraryName) : mLibrary(libraryName)
{
    mName = node->GetAttribute(L"name", L"").ToStdWstring();

    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        std::shared_ptr<Primitive> primitive;

        auto nodeName = child->GetName();
        if(nodeName == L"description")
        {
            mDescription = child->GetNodeContent().ToStdWstring();
        }
        else if(nodeName == L"wire")
        {
            primitive = std::make_shared<Wire>(child);
        }
        else if(nodeName == L"pad")
        {
            primitive = std::make_shared<Pad>(child);
        }
        else if(nodeName == L"text")
        {
            primitive = std::make_shared<Text>(child);
        }

        if(primitive != nullptr)
        {
            mPrimitives.push_back(primitive);
        }
    }
}


/**
 * Draw this package
 * @param graphics Graphics device to render onto
 * @param context PCB context currently
 * @param element Element we are member of
 */
void Package::Draw(wxGraphicsContext* graphics, PCBContext* context, Element* element)
{
    GraphicsHelper gh(graphics);

  //  gh.CrossHair(0, 0);

    for(auto primitive: mPrimitives)
    {
        primitive->Draw(graphics, context, element);
    }
}


/**
 * Handle mouse clicks (mouse down)
 * @param context PCB editor context.
 */

/**
 * Handle mouse clicks (mouse down)
 * @param element The element this package is being used for
 * @param context A PCB context that indicates what to do with the click if it happens
 * @param point Point clicks on in package coordinates
 * @return True if clicked on
 */
bool Package::Click(Element* element, PCBContext* context, const wxPoint2DDouble &point)
{
    for(const auto& primitive: mPrimitives)
    {
        if(primitive->Click(element, context, point))
        {
            return true;
        }
    }

    return false;
}