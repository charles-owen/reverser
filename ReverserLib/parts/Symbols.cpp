/**
 * @file Symbols.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Symbols.h"
#include "Symbol.h"
#include "../XmlHelper.h"

bool Symbols::XmlLoad(wxXmlNode* root)
{
    // <root><drawing><schematic><libraries>
    auto libraries = XmlHelper::Find(root, L"drawing/schematic/libraries");
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

void Symbols::XmlLibrary(wxXmlNode* node)
{
    std::wstring libraryName = node->GetAttribute(L"name", L"").ToStdWstring();
    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"symbols")
        {
            XmlSymbols(child, libraryName);
        }
    }
}

void Symbols::XmlSymbols(wxXmlNode* node, std::wstring& libraryName)
{
    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == L"symbol")
        {
            auto symbol = std::make_shared<Symbol>(child, libraryName);
            mSymbols.push_back(symbol);
        }
    }
}

std::shared_ptr<Symbol> Symbols::Find(const std::wstring& libraryName, const std::wstring& name)
{
    for(auto symbol: mSymbols)
    {
        if(symbol->IsItem(libraryName, name))
        {
            return symbol;
        }
    }

    return nullptr;
}