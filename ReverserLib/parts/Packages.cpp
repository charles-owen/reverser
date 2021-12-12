/**
 * @file Packages.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Packages.h"
#include "Package.h"
#include "../XmlHelper.h"

bool Packages::XmlLoad(wxXmlNode* root)
{
    // <root><drawing><board><libraries>
    auto libraries = XmlHelper::Find(root, L"drawing/board/libraries");
    if(libraries == nullptr)
    {
        return false;
    }

    auto child = libraries->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"library")
        {
            XmlLibrary(child);
        }
    }

    return true;
}



/**
 * root/drawing/board/libraries/library
 * @param node
 */
void Packages::XmlLibrary(wxXmlNode* node)
{
    std::wstring name = node->GetAttribute(L"name", L"").ToStdWstring();
    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"packages")
        {
            XmlPackages(child, name);
        }
    }
}

void Packages::XmlPackages(wxXmlNode* node, std::wstring& libraryName)
{
    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"package")
        {
            auto package = std::make_shared<Package>(child, libraryName);
            mPackages.push_back(package);
        }
    }
}

std::shared_ptr<Package> Packages::Find(const std::wstring& library, const std::wstring& name)
{
    for(auto package: mPackages)
    {
        if(package->GetLibrary() == library && package->GetName() == name)
        {
            return package;
        }
    }

    return nullptr;
}
