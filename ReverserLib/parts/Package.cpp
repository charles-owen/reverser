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

void Package::Draw(wxGraphicsContext* graphics)
{
    GraphicsHelper gh(graphics);

  //  gh.CrossHair(0, 0);

    for(auto primitive: mPrimitives)
    {
        primitive->Draw(graphics);
    }

}
