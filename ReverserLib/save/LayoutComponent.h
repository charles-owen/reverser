/**
 * @file LayoutComponent.h
 * @author Charles B. Owen
 *
 *
 * A component placement in the PCB layout.
 */

#ifndef REVERSER_LAYOUTCOMPONENT_H
#define REVERSER_LAYOUTCOMPONENT_H

#include "Placement.h"

#include "Layout.h"

class Component;
class Layout;
class wxGraphicsContext;
class PCBContext;
class Attribute;


/**
 * A component placement in the PCB layout.
 */
class LayoutComponent
{
public:


    void SetComponent(std::shared_ptr<Component> component);
    std::shared_ptr<Component> GetComponent() {return mComponent;}

    /**
     * Get the placement for the component
     * @return Placement object pointer
     */
    Placement *GetPlacement() {return &mPlacement;}

    void Draw(PCBContext* context, wxGraphicsContext *graphics);
    bool Click(PCBContext* context, const wxPoint2DDouble &point);
    void Move(const wxPoint2DDouble &delta);
    void Rotate(double angle);


    void XmlSave(wxXmlNode* node);
    void XmlLoad(wxXmlNode* node);

    class Pin
    {
    public:
        Pin(LayoutComponent *component, std::shared_ptr<Layout::Pin> pin) :
                mComponent(component), mPin(pin) {}

        void Draw(PCBContext* context, wxGraphicsContext* graphics);
        bool Click(PCBContext* context, const wxPoint2DDouble &point);

    private:
        std::shared_ptr<Layout::Pin> mPin;
        LayoutComponent *mComponent;
    };

    class Attribute
    {
    public:
        Attribute(LayoutComponent *component, std::shared_ptr<::Attribute> attribute) :
            mComponent(component), mAttribute(attribute) {}

        void Draw(PCBContext* context, wxGraphicsContext* graphics);
        bool Click(PCBContext* context, const wxPoint2DDouble &point);
        void Move(const wxPoint2DDouble &delta);
        void Rotate(double angle);
        void XmlSave(wxXmlNode* node);
        void XmlLoad(wxXmlNode* node);

        const std::wstring &GetName() const;

    private:
        Placement mPlacement;
        std::shared_ptr<::Attribute> mAttribute;
        LayoutComponent *mComponent;
    };

    std::shared_ptr<Attribute> GetAttribute(std::wstring name);

private:
    /// Placement of the layout component
    Placement   mPlacement;

    /// Component that supplies this layout
    std::shared_ptr<Component> mComponent;

    /// The local pins
    std::vector<std::shared_ptr<Pin>> mPins;

    /// The local attributes
    std::vector<std::shared_ptr<Attribute>> mAttributes;
};

#endif //REVERSER_LAYOUTCOMPONENT_H
