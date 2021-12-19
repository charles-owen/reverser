/**
 * @file LibraryItem.cpp
 * @author Charles Owen
 */

#include "LibraryItem.h"

LibraryItem::LibraryItem(wxXmlNode* node, const std::wstring& libraryName) : mLibrary(libraryName)
{
    mName = node->GetAttribute(L"name", L"").ToStdWstring();
}
