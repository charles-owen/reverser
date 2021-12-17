/**
 * @file Primitive.h
 * @author Charles Owen
 *
 * Base class for graphical primitives such as wires, pins, and text
 */

#ifndef REVERSER_PRIMITIVE_H
#define REVERSER_PRIMITIVE_H

class Element;
class PCBContext;

/**
 * Base class for graphical primitives such as wires, pins, and text
 */
class Primitive {
private:

public:
    virtual ~Primitive() = default;

    virtual void Draw(wxGraphicsContext* graphics, PCBContext* context, Element* element) {}
    virtual bool Click(Element* element, PCBContext* context, const wxPoint2DDouble &point) {return false;}
};

#endif //REVERSER_PRIMITIVE_H
