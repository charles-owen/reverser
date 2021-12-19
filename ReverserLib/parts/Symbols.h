/**
 * @file Symbols.h
 * @author Charles Owen
 *
 * A collection of symbols (schematic symbols)
 */

#ifndef REVERSER_SYMBOLS_H
#define REVERSER_SYMBOLS_H

class Symbol;

/**
 * A collection of symbols (schematic symbols)
 */
class Symbols {
private:
    void XmlLibrary(wxXmlNode* node);
    void XmlSymbols(wxXmlNode* node, std::wstring& libraryName);

    std::vector<std::shared_ptr<Symbol>> mSymbols;

public:
    bool XmlLoad(wxXmlNode* node);

    std::shared_ptr<Symbol> Find(const std::wstring& libraryName, const std::wstring& name);
};

#endif //REVERSER_SYMBOLS_H
