/**
 * @file ComponentPropertiesDlg.h
 * @author Charles B. Owen
 *
 * Component properties dialog box
 *
 */

#ifndef REVERSER_COMPONENTPROPERTIESDLG_H
#define REVERSER_COMPONENTPROPERTIESDLG_H

class Component;
class Components;

/**
 * Component properties dialog box
 */
class ComponentPropertiesDlg : public wxDialog
{
public:
    ComponentPropertiesDlg(std::shared_ptr<Components> components,
            std::shared_ptr<Component> component);


private:
    /// Component collection
    std::shared_ptr<Components> mComponents;

    /// Component we are editing
    std::shared_ptr<Component> mComponent;

    /// Component number control
    wxTextCtrl *mNumCtrl;

    /// Component value control
    wxTextCtrl *mValueCtrl;

    void OnOk(wxCommandEvent& event);
};

#endif //REVERSER_COMPONENTPROPERTIESDLG_H
