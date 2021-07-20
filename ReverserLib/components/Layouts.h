/**
 * @file Layouts.h
 * @author Charles B. Owen
 *
 * Collection of layouts
 *
 */

#ifndef REVERSER_LAYOUTS_H
#define REVERSER_LAYOUTS_H

#include <map>

class wxXmlNode;
class Layout;

/**
 * Collection of layouts
 */
class Layouts
{
public:
    Layouts();

    bool Load(wxString path, bool silent=false);

    int NumLayouts() {return (int)mLayouts.size();}
    std::shared_ptr<Layout> Get(const std::wstring &name);

private:
    void XmlLayout(wxXmlNode* node, wxString path, bool silent);

    std::map<std::wstring, std::shared_ptr<Layout>> mLayouts;
};

#endif //REVERSER_LAYOUTS_H
