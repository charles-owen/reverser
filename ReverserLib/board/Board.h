/**
 * @file Board.h
 * @author Charles Owen
 *
 * Represents the board layout as a loaded .brd file (if any)
 */

#ifndef REVERSER_BOARD_H
#define REVERSER_BOARD_H

#include "../EagleDOM.h"

/**
 * Represents the board layout as a loaded .brd file (if any)
 */
class Board : public EagleDOM {
private:

public:

    bool Load(const std::wstring& path);

    bool SaveXml(const std::wstring& designPath, wxXmlNode* node);

    bool LoadXml(wxWindow* parent, const std::wstring& designPath, wxXmlNode* root);
};

#endif //REVERSER_BOARD_H
