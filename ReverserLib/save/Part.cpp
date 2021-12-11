/**
 * @file Part.cpp
 * @author Charles B. Owen
 */

#include "pch.h"

#include "Part.h"
#include "Layouts.h"
#include "ReverserConst.h"
#include "XmlHelper.h"

/**
 * Load a part from an XML file.
 * @param path Path to the Reverser data root directory
 * @param name File to load (without the extension)
 * @param layouts Layouts to use dependency injection
 * @param symbols Symbols to use dependency injection
 * @param silent If true, wxMessageBox is not called when there is an error.
 * @return True if loaded successfully
 */
bool Part::Load(wxString path, wxString name, Layouts* layouts, Symbols* symbols, bool silent)
{
    wxString filename = path + ReverserConst::PartsDir + name + ReverserConst::PartExt;
    wxXmlDocument xmlDoc;
    wxLogNull logNo;
    if(!xmlDoc.Load(filename))
    {
        if(!silent)
        {
            wxMessageBox(L"Unable to load part definition file: " + filename);
        }
        return false;
    }


    auto node = xmlDoc.GetRoot();
    mName = node->GetAttribute(L"name");
    mPrefix = node->GetAttribute(L"prefix", L"X");

    auto child = node->GetChildren();
    for( ; child; child=child->GetNext())
    {
        auto name = child->GetName();
        if(name == L"desc")
        {
            XmlDesc(child);
        }
        else if(name == L"layout")
        {
            XmlLayout(child, layouts);
        }
    }

    return true;
}


/**
 * Load any layout comment from an XML file
 * @param node XML node to load from
 */
void Part::XmlDesc(wxXmlNode* node)
{
    mDescription = node->GetNodeContent();
}


void Part::XmlLayout(wxXmlNode* node, Layouts *layouts)
{
    std::wstring name = node->GetAttribute(L"name", L"").ToStdWstring();
    if(name == L"")
    {
        // No name?
        return;
    }

    mLayout = layouts->Get(name);
}