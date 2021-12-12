/**
 * @file Package.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Package.h"
#include "../parts/Pad.h"


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

        }
        else if(nodeName == L"pad")
        {
            auto pad = std::make_shared<Pad>(child);
            primitive = pad;
        }
        else if(nodeName == L"text")
        {

        }

        if(primitive != nullptr)
        {
            mPrimitives.push_back(primitive);
        }
    }
}
