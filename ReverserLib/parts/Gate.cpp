/**
 * @file Gate.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Gate.h"
#include "Symbols.h"
#include "../XmlHelper.h"

Gate::Gate(wxXmlNode* node, const std::wstring& libraryName, Symbols* symbols)
{
    mName = node->GetAttribute(L"name");
    mX = XmlHelper::GetAttributeDouble(node, L"x", 0);
    mY = XmlHelper::GetAttributeDouble(node, L"y", 0);

    auto symbolName = node->GetAttribute(L"symbol");
    mSymbol = symbols->Find(libraryName, symbolName.ToStdWstring());
}
