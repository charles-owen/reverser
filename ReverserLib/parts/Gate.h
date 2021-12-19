/**
 * @file Gate.h
 * @author Charles Owen
 *
 * A gate is one component of a device.
 */

#ifndef REVERSER_GATE_H
#define REVERSER_GATE_H

class Symbol;
class Symbols;

/**
 * A gate is one component of a device.
 */
class Gate {
private:
    std::wstring mName;
    std::shared_ptr<Symbol> mSymbol;
    double mX;
    double mY;

public:
    Gate(wxXmlNode* node, const std::wstring& libraryName, Symbols* symbols);

    [[nodiscard]] const std::wstring& GetName() const {return mName;}
    auto GetSymbol() {return mSymbol;}
};

#endif //REVERSER_GATE_H
