/**
 * @file EagleDOM.cpp
 * @author Charles Owen
 */

#include "pch.h"
#include <wx/filename.h>

#include "EagleDOM.h"


bool EagleDOM::Load(const std::wstring& path)
{
    if(!mDOM.Load(path))
    {
       return false;
    }

    mPath = path;
    return true;
}

wxXmlNode* EagleDOM::SaveXml(const std::wstring& designPath, wxXmlNode* node, const std::wstring& name)
{
    if(mPath == L"")
    {
        return nullptr;
    }

    auto path1 = GetRelativePath(designPath);

    auto newNode = new wxXmlNode(wxXML_ELEMENT_NODE, name);
    node->AddChild(newNode);

    newNode->AddAttribute(L"path", path1);

    return newNode;
}


wxXmlNode* EagleDOM::LoadXml(wxWindow* parent, const std::wstring& designPath, wxXmlNode* root, const std::wstring& name)
{
    auto node = XmlFindChild(root, name);
    if(node == nullptr)
    {
        return nullptr;
    }

    // Get the relative path name
    auto relativePath = node->GetAttribute(L"path");
    if(relativePath == L"")
    {
        return nullptr;
    }


    wxFileName dp(designPath);
    auto dirPath = dp.GetPath();

    auto path = dirPath + L"/" + relativePath;

    if(!Load(path.ToStdWstring()))
    {
        wxMessageBox(L"Unable to open " + relativePath);
        return nullptr;
    }

    return node;
}


/**
 * Return the path to the file relative to the design file path
 * @param designPath Design file path
 * @return Relative path
 */
std::wstring EagleDOM::GetRelativePath(const std::wstring& designPath)
{
    //
    // Convert filename to be relative to the directory containing the .rvrs file
    //
    wxFileName dp(designPath);
    auto dirPath = dp.GetPath();

    wxFileName p(mPath);
    p.MakeRelativeTo(dirPath);

    return p.GetFullPath().ToStdWstring();
}

wxXmlNode *EagleDOM::XmlFindChild(wxXmlNode* node, const std::wstring& name)
{
    auto child = node->GetChildren();
    for( ; child; child = child->GetNext())
    {
        if(child->GetName() == name)
        {
            return child;
        }
    }

    return nullptr;
}