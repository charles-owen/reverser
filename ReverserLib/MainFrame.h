/**
 * @file MainFrame.h
 * @author Charles B. Owen
 *
 * The top-level (main) frame of the application
 */
#ifndef _MAINFRAME_H_
#define _MAINFRAME_H_

#include "Reverser.h"
#include <wx/filehistory.h>
#include <wx/config.h>

//class wxNotebook;
//class wxBookCtrlEvent;
//class PCBView;
//class PCBPanel;
//class SchematicPanel;

/**
 * The top-level (main) frame of the application
 */
class MainFrame final : public wxFrame
{

private:
    void OnExit(wxCommandEvent& event);

    /// Reverser system class
    Reverser mReverser;

//    wxMenu *mPCBMenu = nullptr;
//    wxMenu *mSchematicMenu = nullptr;
//    wxNotebook *mNotebook;

    wxConfig mConfig;
    wxFileHistory mHistory;

//    PCBPanel *mPCBPanel;
//    SchematicPanel *mSchematicPanel;

    // Any class wishing to process wxWidgets events must use this macro
    void OnFileSave(wxCommandEvent& event);
    void OnFileSaveAs(wxCommandEvent& event);
    void OnFileOpen(wxCommandEvent& event);
    void OnMRUFile(wxCommandEvent& event);

    void OnComponentsDelete(wxCommandEvent& event);
    void OnComponentsDeleteUpdate(wxUpdateUIEvent& event);
    void OnComponentsEdit(wxCommandEvent& event);
    void OnComponentsEditUpdate(wxUpdateUIEvent& event);

    void OnNetworksNewNetwork(wxCommandEvent& event);

    void UpdateTitle();

public:
    MainFrame();

    Reverser *GetReverser() {return &mReverser; }
};

#endif //_MAINFRAME_H_
