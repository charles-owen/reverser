/**
 * @file PCBContext.h
 * @author Charles B. Owen
 *
 * Editor context for the printed circuit board
 *
 */

#ifndef REVERSER_PCBCONTEXT_H
#define REVERSER_PCBCONTEXT_H

#include <set>

//#include "../components/LayoutComponent.h"

class PCBPanel;
class Element;
class Pad;


/**
 * Editor context for the printed circuit board
 */
class PCBContext
{
public:
    enum class EditMode {
        Components,
        Networks
    };

private:
    PCBPanel *mPCBPanel;

    EditMode mEditMode = EditMode::Components;

    bool mShowValues = false;

    Element* mSelectedElement = nullptr;
    Pad* mSelectedPad = nullptr;
//    LayoutComponent::Attribute *mSelectedAttribute = nullptr;
//
//    std::set<Network *> mSelectedNetworks;

public:
    PCBContext(PCBPanel *panel) : mPCBPanel(panel) {}


    void SetMode(EditMode mode);
    EditMode GetMode() {return mEditMode;}
    bool IsMode(EditMode mode) {return mEditMode == mode; }

    void Clicked(Element *element, Pad *pad);
//    void Clicked(LayoutComponent *component, LayoutComponent::Attribute *attribute);

    void ClearSelection();
    void Move(const wxPoint2DDouble& position, const wxPoint2DDouble& delta);
    void Rotate(double angle);

    auto IsSelected(Element* element) const { return element == mSelectedElement; }
    auto IsSelected(Pad* pad) const {return pad == mSelectedPad;}

//    bool IsSelected(LayoutComponent *component) { return component == mSelectedComponent; }
//    bool IsSelected(LayoutComponent::Pin *pin) {return pin == mSelectedPin; }
//    bool IsSelected(LayoutComponent::Attribute *attribute) {return attribute == mSelectedAttribute; }

//    LayoutComponent *GetSelectedComponent() {return mSelectedComponent; }

    bool ShowValues() {return mShowValues;}


};

#endif //REVERSER_PCBCONTEXT_H
