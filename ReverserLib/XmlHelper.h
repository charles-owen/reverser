/**
 * @file XmlHelper.h
 * @author Charles B. Owen
 *
 * Helper functions that make using wxXmlNode easier
 *
 */

#ifndef REVERSER_XMLHELPER_H
#define REVERSER_XMLHELPER_H

#include <wx/xml/xml.h>

/**
 * Helper functions that make using wxXmlNode easier
 */
class XmlHelper
{
public:
    static double GetAttributeDouble(wxXmlNode *node, wxString attrName, double defaultVal);
    static int GetAttributeInt(wxXmlNode *node, wxString attrName, int defaultVal);
    static bool GetAttributeBool(wxXmlNode *node, wxString attrName, bool defaultVal);

    static void SetAttributeDouble(wxXmlNode *node, wxString attrName, double attrValue);

};

#endif //REVERSER_XMLHELPER_H
