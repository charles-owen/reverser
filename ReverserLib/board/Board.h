/**
 * @file Board.h
 * @author Charles Owen
 *
 * Represents the board layout as a loaded .brd file (if any)
 */

#ifndef REVERSER_BOARD_H
#define REVERSER_BOARD_H

#include "../EagleDOM.h"
#include "../parts/Packages.h"
#include "../parts/Elements.h"

class Package;

/**
 * Represents the board layout as a loaded .brd file (if any)
 */
class Board : public EagleDOM {
private:

protected:
    void XmlParse(wxXmlNode* root) override;

    /// Packages - collection of layout symbols
    Packages mPackages;

    /// Elements - collection of parts on the board
    Elements mElements;

public:

    bool EagleLoad(const std::wstring& path) override;

    bool XmlSave(const std::wstring& designPath, wxXmlNode* node);

    bool XmlLoad(wxWindow* parent, const std::wstring& designPath, wxXmlNode* root);

    Elements* GetElements() {return &mElements;}
};

#endif //REVERSER_BOARD_H
