/**
 * @file Layout.cpp
 * @author Charles B. Owen
 */

#include "pch.h"

#include <wx/graphics.h>

#include "Layout.h"
#include "ReverserConst.h"
#include "XmlHelper.h"

/**
 * Load the layout.
 * @param path Path to the directory containing the layouts
 * @param name Layout name
 * @param silent True if no message box.
 * @return
 */
bool Layout::Load(wxString path, wxString name, bool silent)
{
    wxString filename = path + ReverserConst::LayoutsDir + name + ReverserConst::LayoutExt;
    wxXmlDocument xmlDoc;
    wxLogNull logNo;
    if(!xmlDoc.Load(filename))
    {
        if(!silent)
        {
            wxMessageBox(L"Unable to load layout definition file: " + filename);
        }
        return false;
    }


    auto node = xmlDoc.GetRoot();
    mName = node->GetAttribute(L"name");

    auto child = node->GetChildren();
    for( ; child; child=child->GetNext())
    {
        auto name = child->GetName();
        if(name == L"desc")
        {
            XmlDesc(child);
        }
        else if(name == L"pins")
        {
            XmlPins(child);
        }
        else if(name == L"draw")
        {
            mDrawable.XmlLoad(child);
        }
    }

    return true;
}


/**
 * Load any layout comment from an XML file
 * @param node XML node to load from
 */
void Layout::XmlDesc(wxXmlNode* node)
{
    mDescription = node->GetNodeContent();
}

/**
 * Load any layout pins from an XML file
 * @param node XML node to load from
 */
void Layout::XmlPins(wxXmlNode* node)
{
    mDefaultPad = XmlHelper::GetAttributeDouble(node, L"pad", 3.0);

    auto child = node->GetChildren();
    for( ; child; child=child->GetNext())
    {
        if(child->GetName() == L"pin")
        {
            XmlPinsPin(child);
        }
    }
}

/**
 * Load a layout pin from an XML file
 * @param node XML node to load from
 */
void Layout::XmlPinsPin(wxXmlNode* node)
{
    auto n = XmlHelper::GetAttributeInt(node, L"n", 0);
    auto x = XmlHelper::GetAttributeDouble(node, L"x", 0);
    auto y = XmlHelper::GetAttributeDouble(node, L"y", 0);
    auto d = XmlHelper::GetAttributeDouble(node, L"pad", mDefaultPad);
    mPins.push_back(std::make_shared<Pin>(n, x, y, d));
}


