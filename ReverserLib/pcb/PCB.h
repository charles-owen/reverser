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
class Design;
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
    Design *mModel;

    /// The layout components
    std::vector<std::shared_ptr<LayoutComponent>> mComponents;

public:
    PCB(Reverser *reverser, Design *model);

    double GetWidth() const;
    void SetWidth(double mWidth);
    double GetHeight() const;
    void SetHeight(double mHeight);

    Design *GetModel() { return mModel; }

    void XmlSave(const std::wstring& designPath, wxXmlNode *node);
    void XmlLoad(wxWindow* parent, std::wstring& designPath, wxXmlNode* root);

    std::shared_ptr<Layer> GetTop() {return mTop;}
    std::shared_ptr<Layer> GetBottom() {return mBottom;}

    void Add(std::shared_ptr<LayoutComponent> component) {mComponents.push_back(component);}
    void Delete(std::shared_ptr<Component> component);

    bool Click(PCBContext *context, const wxPoint2DDouble &point);
};

#endif //REVERSER_PCB_H
