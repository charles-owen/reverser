/**
 * @file Junction.h
 * @author Charles Owen
 *
 * Junction points in the schematic
 */

#ifndef REVERSER_JUNCTION_H
#define REVERSER_JUNCTION_H

#include "Primitive.h"

class Junction : public Primitive {
private:
    double mX;
    double mY;

public:
    Junction(wxXmlNode* node);
};

#endif //REVERSER_JUNCTION_H
