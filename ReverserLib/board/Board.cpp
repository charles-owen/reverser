/**
 * @file Board.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Board.h"

bool Board::Load(const std::wstring& path)
{
    if(!EagleDOM::Load(path))
    {
        return false;
    }

    return true;
}

bool Board::SaveXml(const std::wstring& designPath, wxXmlNode* node)
{
    auto newNode = EagleDOM::SaveXml(designPath, node, L"brd");
    if(newNode == nullptr)
    {
        return true;
    }

    return true;
}

bool Board::LoadXml(wxWindow* parent, const std::wstring& designPath, wxXmlNode* root)
{
    auto node = EagleDOM::LoadXml(parent, designPath, root, L"brd");

    return true;
}