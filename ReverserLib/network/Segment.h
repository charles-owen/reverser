/**
 * @file Segment.h
 * @author Charles Owen
 *
 * A segment of a network.
 */

#ifndef REVERSER_SEGMENT_H
#define REVERSER_SEGMENT_H

class Primitive;
class PinRef;
class Parts;


/**
 * A segment of a network.
 */
class Segment {
private:
    /// The primitives such as lines and junction points
    std::vector<std::shared_ptr<Primitive>> mPrimitives;

    /// The pin references for this net
    std::vector<std::shared_ptr<PinRef>> mPins;

public:
    Segment(wxXmlNode* node, Parts* parts);

    std::vector<std::shared_ptr<PinRef>> GetPinRefs() {return mPins;}
};

#endif //REVERSER_SEGMENT_H
