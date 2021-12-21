/**
 * @file Net.h
 * @author Charles Owen
 *
 * A single circuit network.
 */

#ifndef REVERSER_NET_H
#define REVERSER_NET_H

class Segment;
class Parts;
class PinRef;

/**
 * A single circuit network.
 */
class Net {
private:
    std::wstring mName;

    std::vector<std::shared_ptr<Segment>> mSegments;

public:
    Net(wxXmlNode* node, Parts* parts);

    auto GetName() const {return mName;}

    std::vector<std::shared_ptr<PinRef>> GetPinRefs();
};

#endif //REVERSER_NET_H
