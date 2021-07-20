/**
 * @file Parts.cpp
 * @author Charles B. Owen
 */

#include "../pch.h"

#include "Parts.h"
#include "Part.h"

#include <wx/xml/xml.h>

#include "../ReverserConst.h"

/**
 * Constructor
 */
Parts::Parts()
{

}

/**
 * Load the parts file and all parts
 * @param path Path to the directory containing the components library
 * @param layouts Layouts to use dependency injection
 * @param symbols Symbols to use dependency injection
 * @param silent True if no message box.
 * @return
 */
bool Parts::Load(wxString path, Layouts* layouts, Symbols* symbols, bool silent)
{
    wxString filename = path + ReverserConst::PartsDir + ReverserConst::PartsFile;
    wxXmlDocument xmlDoc;
    wxLogNull logNo;
    if(!xmlDoc.Load(filename))
    {
        if(!silent)
        {
            wxMessageBox(L"Unable to load parts definition file: " + filename);
        }
        return false;
    }

    auto node = xmlDoc.GetRoot()->GetChildren();
    for( ; node; node=node->GetNext())
    {
        if(node->GetName() == L"part")
        {
            XmlPart(node, path, layouts, symbols, silent);
        }
    }

    return true;
}


void Parts::XmlPart(wxXmlNode *node, wxString path, Layouts *layouts, Symbols *symbols, bool silent)
{
    auto layout = std::make_shared<Part>();
    auto name = node->GetAttribute(L"name", L"");
    layout->Load(path, name, layouts, symbols, silent);

    mParts[layout->GetName()] = layout;
}


std::shared_ptr<Part> Parts::Get(const std::wstring &name)
{
    auto layout = mParts.find(name);
    if(layout != mParts.end())
    {
        return layout->second;
    }

    return nullptr;
}
