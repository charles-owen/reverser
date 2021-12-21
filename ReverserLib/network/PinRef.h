/**
 * @file PinRef.h
 * @author Charles Owen
 *
 * Reference to a schematic pin and PCB pad.
 */

#ifndef REVERSER_PINREF_H
#define REVERSER_PINREF_H

class Parts;
class Part;
class Instance;
class Pin;

/**
 * Reference to a schematic pin and PCB pad.
 */
class PinRef {
private:
    /// The part for this pin reference
    std::shared_ptr<Part> mPart;

    /// The part instance for this pin reference
    std::shared_ptr<Instance> mInstance;

    /// The pin on the symbol for this pin references
    std::shared_ptr<Pin> mPin;

    /// The circuit board pad name
    std::wstring mPadName;

    /// Is this a new (added) pin reference in a network?
    bool mAdded = false;

public:
    PinRef(wxXmlNode* node, Parts* parts);

    auto GetPadName() {return mPadName;}
};

#endif //REVERSER_PINREF_H
