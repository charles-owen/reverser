/**
 * @file Schematic.h
 * @author Charles Owen
 *
 * Represents the board schematic and the loaded .sch file (if any)
 */

#ifndef REVERSER_SCHEMATIC_H
#define REVERSER_SCHEMATIC_H

#include "../EagleDOM.h"
#include "../parts/Symbols.h"

/**
 * Represents the board schematic and the loaded .sch file (if any)
 */
class Schematic : public EagleDOM {
private:
    Symbols mSymbols;

protected:
    void XmlParse(wxXmlNode* root) override;

public:


    bool EagleLoad(const std::wstring& path) override;
    bool XmlSave(const std::wstring& designPath, wxXmlNode* node);

    bool XmlLoad(wxWindow* parent, const std::wstring& designPath, wxXmlNode* node);

};

#endif //REVERSER_SCHEMATIC_H
