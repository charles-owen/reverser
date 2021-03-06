/**
 * @file EagleDOM.h
 * @author Charles Owen
 *
 * Eagle document object model format support.
 * Common code between .sch and .brd files
 */

#ifndef REVERSER_EAGLEDOM_H
#define REVERSER_EAGLEDOM_H

#include <wx/xml/xml.h>

/**
 * Eagle document object model format support.
 * Common code between .sch and .brd files
 */
class EagleDOM {
private:
    /// The file path
    std::wstring mPath;

    /// The loaded document object model
    wxXmlDocument mDOM;

protected:
    virtual bool EagleLoad(const std::wstring& path);
    wxXmlNode* XmlSave(const std::wstring& designPath, wxXmlNode* node, const std::wstring& name);
    wxXmlNode *XmlFindChild(wxXmlNode* node, const std::wstring& name);
    wxXmlNode* XmlLoad(wxWindow* parent, const std::wstring& designPath, wxXmlNode* root, const std::wstring& name);

    virtual void XmlParse(wxXmlNode* root) {}

public:
    auto GetPath() {return mPath;}

    std::wstring GetRelativePath(const std::wstring& designPath);
};

#endif //REVERSER_EAGLEDOM_H
