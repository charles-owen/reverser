/**
 * @file Pin.h
 * @author Charles Owen
 *
 * A Pin is a connection point on a schematic device
 */

#ifndef REVERSER_PIN_H
#define REVERSER_PIN_H

/**
 * A Pin is a connection point on a schematic device
 */
class Pin {
private:
    std::wstring mName; ///< Pin name
    double mX;
    double mY;

public:
    explicit Pin(wxXmlNode* node);

    auto GetName() const {return mName;}

    auto GetX() const {return mX;}
    auto GetY() const {return mY;}
};

#endif //REVERSER_PIN_H
