/**
 * @file Part.h
 * @author Charles B. Owen
 *
 *
 * The collection of parts.
 */

#ifndef REVERSER_PART_H
#define REVERSER_PART_H

class Layouts;
class Layout;
class Symbols;
class wxXmlNode;

/**
 * The collection of parts.
 *
 * A part consists of a layout and
 * one or more schematic symbols.
 */
class Part
{
public:

    bool Load(wxString path, wxString name, Layouts *layouts, Symbols *symbols, bool silent=false);

    const std::wstring GetName() const {return mName;}
    const std::wstring GetDescription() const {return mDescription;}
    const std::wstring GetPrefix() const {return mPrefix;}

    std::shared_ptr<Layout> GetLayout() {return mLayout;}

private:
    std::wstring mName;
    std::wstring mPrefix;
    std::wstring mDescription;

    std::shared_ptr<Layout> mLayout;

    void XmlDesc(wxXmlNode* node);
    void XmlLayout(wxXmlNode* node, Layouts* layouts);
};

#endif //REVERSER_PART_H
