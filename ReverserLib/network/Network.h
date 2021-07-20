/**
 * @file Network.h
 * @author Charles B. Owen
 *
 * Represents a single circuit network.
 *
 */

#ifndef REVERSER_NETWORK_H
#define REVERSER_NETWORK_H

class Component;
class wxXmlNode;

class Network
{
public:
    Network();

    static const std::wstring Prefix;

    void XmlSave(wxXmlNode *node);
    void XmlLoad(wxXmlNode *node);

    void SetName(const std::wstring &name) {mName = name;}
    const std::wstring &GetName() const {return mName;}

    int GetNumber();

private:
    std::wstring mName; // Network name

    class Member
    {
    public:
        Component *mComponent;
        int mPin;
    };



};

#endif //REVERSER_NETWORK_H
