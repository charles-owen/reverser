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
class DeviceConnect;

/**
 * A gate is one component of a device.
 */
class Gate {
private:
    std::wstring mName;
    std::shared_ptr<Symbol> mSymbol;
    double mX;
    double mY;

    std::vector<DeviceConnect*> mConnects;

public:
    Gate(wxXmlNode* node, const std::wstring& libraryName, Symbols* symbols);

    [[nodiscard]] const std::wstring& GetName() const {return mName;}
    auto GetSymbol() {return mSymbol;}

    void AddConnect(DeviceConnect* connect) {mConnects.push_back(connect);}

    /**
     * Get an iterator for the beginning of the collection of connections
     * @return Iter object at position 0
     */
    auto begin() { return mConnects.begin(); }

    /**
     * Get an iterator for the end of the collection of connections
     * @return Iter object at position past the end
     */
    auto end() { return mConnects.end(); }
};

#endif //REVERSER_GATE_H
