/**
 * @file Wire.h
 * @author Charles Owen
 *
 * Wires represent the connections on the board
 */

#ifndef REVERSER_WIRE_H
#define REVERSER_WIRE_H

#include "Primitive.h"

/**
 * Wires represent the connections on the board
 */
class Wire : public Primitive {
private:
    double mX1;
    double mY1;
    double mX2;
    double mY2;
    double mWidth;
    int mLayer;

public:
    Wire(wxXmlNode* node);

    void Draw(wxGraphicsContext* graphics, PCBContext* context, Element* element) override;
};

#endif //REVERSER_WIRE_H
