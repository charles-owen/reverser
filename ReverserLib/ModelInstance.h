/**
 * @file
 * A model instance is an instance state of the model.
 * This is designed to support future Undo capabilities.
 */

#ifndef REVERSER_MODELINSTANCE_H
#define REVERSER_MODELINSTANCE_H

#include <memory>

class wxXmlNode;

class Reverser;
class Design;
class PCB;
class Components;
class Component;
class Networks;

/**
 * A model instance is an instance state of the model.
 * This is designed to support future Undo capabilities.
 */
class ModelInstance
{
public:
    ModelInstance(Reverser *reverser, Design *model);

    std::shared_ptr<PCB> GetPCB() { return mPCB; }
    void XmlSave(wxXmlNode *node);
    void XmlLoad(wxXmlNode *node);

    std::shared_ptr<Components> GetComponents() {return mComponents;}
    std::shared_ptr<Networks> GetNetworks() {return mNetworks;}

    void Delete(std::shared_ptr<Component> component);

private:
    Reverser *mReverser;
    Design *mModel;

    /// The printed circuit board
    std::shared_ptr<PCB> mPCB;

    std::shared_ptr<Components> mComponents;

    std::shared_ptr<Networks> mNetworks;
};

#endif //REVERSER_MODELINSTANCE_H
