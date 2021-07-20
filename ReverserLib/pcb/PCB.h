/**
 * @file PCB.h
 * @author Charles B. Owen
 *
 * Represent a printed circuit board we are reverse engineering
 */

#ifndef REVERSER_PCB_H
#define REVERSER_PCB_H

#include <vector>
#include <memory>

class wxXmlNode;

class Reverser;
class Model;
class Layer;
class LayoutComponent;
class wxGraphicsContext;
class PCBContext;
class Component;

/**
 * Represent a printed circuit board we are reverse engineering
 */
class PCB
{
public:
    PCB(Reverser *reverser, Model *model);

    double GetWidth() const;
    void SetWidth(double mWidth);
    double GetHeight() const;
    void SetHeight(double mHeight);
    wxSize GetSize() {return wxSize(mWidth, mHeight); }

    Model *GetModel() { return mModel; }

    void XmlSave(wxXmlNode *node);
    void XmlLoad(wxXmlNode* node);

    std::shared_ptr<Layer> GetTop() {return mTop;}
    std::shared_ptr<Layer> GetBottom() {return mBottom;}

    void Add(std::shared_ptr<LayoutComponent> component) {mComponents.push_back(component);}
    void Delete(std::shared_ptr<Component> component);

    void DrawComponents(PCBContext *context, wxGraphicsContext *graphics);
    bool Click(PCBContext *context, const wxPoint2DDouble &point);

private:
    void XmlLoadComponent(wxXmlNode *node);

    /// Board width in millimeters
    double mWidth = 150;

    /// Board height in millimeters
    double mHeight = 150;

    /// Board top layer
    std::shared_ptr<Layer> mTop;

    /// Board bottom layer
    std::shared_ptr<Layer> mBottom;

    Reverser *mReverser;
    Model *mModel;

    /// The layout components
    std::vector<std::shared_ptr<LayoutComponent>> mComponents;

};

#endif //REVERSER_PCB_H
