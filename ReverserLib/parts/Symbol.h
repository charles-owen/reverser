/**
 * @file Symbol.h
 * @author Charles Owen
 *
 * Represents a schematic symbol
 */

#ifndef REVERSER_SYMBOL_H
#define REVERSER_SYMBOL_H

#include "LibraryItem.h"

class Pin;

/**
 * Represents a schematic symbol
 */
class Symbol : public LibraryItem {
private:
    std::wstring mName;
    std::vector<std::shared_ptr<Pin>> mPins;

public:
    Symbol(wxXmlNode* node, const std::wstring& libraryName);

    std::shared_ptr<Pin> FindPin(const std::wstring& name);
};

#endif //REVERSER_SYMBOL_H
