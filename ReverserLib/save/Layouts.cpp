/**
 * @file Layouts.cpp
 * @author Charles B. Owen
 */

#include "pch.h"

#include "Layouts.h"
#include "Layout.h"
#include "ReverserConst.h"

#include <wx/xml/xml.h>


/**
 * Constructor
 */
Layouts::Layouts()
{
}


/**
 * Load the layouts file and all layouts.
 * @param path Path to the directory containing the components library
 * @param silent True if no message box.
 * @return
 */
bool Layouts::Load(wxString path, bool silent)
{
    wxString filename = path + ReverserConst::LayoutsDir + ReverserConst::LayoutsFile;
    wxXmlDocument xmlDoc;
    wxLogNull logNo;
    if(!xmlDoc.Load(filename))
    {
        if(!silent)
        {
            wxMessageBox(L"Unable to load layouts definition file: " + filename);
        }
        return false;
    }

    auto node = xmlDoc.GetRoot()->GetChildren();
    for( ; node; node=node->GetNext())
    {
        if(node->GetName() == L"layout")
        {
            XmlLayout(node, path, silent);
        }
    }

    return true;
}

void Layouts::XmlLayout(wxXmlNode *node, wxString path, bool silent)
{
    auto layout = std::make_shared<Layout>();
    auto name = node->GetAttribute(L"name", L"");
    layout->Load(path, name, silent);

    mLayouts[layout->GetName()] = layout;
}


std::shared_ptr<Layout> Layouts::Get(const std::wstring &name)
{
    auto layout = mLayouts.find(name);
    if(layout != mLayouts.end())
    {
        return layout->second;
    }

    return nullptr;
}
