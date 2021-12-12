/**
 * @file Board.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Board.h"

bool Board::EagleLoad(const std::wstring& path)
{
    if(!EagleDOM::EagleLoad(path))
    {
        return false;
    }

    return true;
}

bool Board::XmlSave(const std::wstring& designPath, wxXmlNode* node)
{
    auto newNode = EagleDOM::XmlSave(designPath, node, L"brd");
    if(newNode == nullptr)
    {
        return true;
    }

    return true;
}

bool Board::XmlLoad(wxWindow* parent, const std::wstring& designPath, wxXmlNode* root)
{
    auto node = EagleDOM::XmlLoad(parent, designPath, root, L"brd");
    return true;
}

void Board::XmlParse(wxXmlNode* root)
{
    mPackages.XmlLoad(root);
    mElements.XmlLoad(root, &mPackages);
}
