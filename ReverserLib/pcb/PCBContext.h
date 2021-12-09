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
//class Network;


/**
 * Editor context for the printed circuit board
 */
class PCBContext
{
public:
    PCBContext(PCBPanel *panel) : mPCBPanel(panel) {}

    enum class EditMode {
        Components,
        Networks
    };

    void SetMode(EditMode mode);
    EditMode GetMode() {return mEditMode;}
    bool IsMode(EditMode mode) {return mEditMode == mode; }

//    void Clicked(LayoutComponent *component, LayoutComponent::Pin *pin);
//    void Clicked(LayoutComponent *component, LayoutComponent::Attribute *attribute);

    void ClearSelection();
    void Move(const wxPoint2DDouble& position, const wxPoint2DDouble& delta);
    void Rotate(double angle);

//    bool IsSelected(LayoutComponent *component) { return component == mSelectedComponent; }
//    bool IsSelected(LayoutComponent::Pin *pin) {return pin == mSelectedPin; }
//    bool IsSelected(LayoutComponent::Attribute *attribute) {return attribute == mSelectedAttribute; }

//    LayoutComponent *GetSelectedComponent() {return mSelectedComponent; }

    bool ShowValues() {return mShowValues;}

private:
    PCBPanel *mPCBPanel;

    EditMode mEditMode = EditMode::Components;

    bool mShowValues = false;

//    LayoutComponent *mSelectedComponent = nullptr;
//    LayoutComponent::Pin *mSelectedPin = nullptr;
//    LayoutComponent::Attribute *mSelectedAttribute = nullptr;
//
//    std::set<Network *> mSelectedNetworks;
};

#endif //REVERSER_PCBCONTEXT_H
