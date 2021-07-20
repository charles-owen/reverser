
#include "../pch.h"

#include "SchematicPanel.h"
#include <wx/notebook.h>

wxBEGIN_EVENT_TABLE(SchematicPanel, wxPanel)
wxEND_EVENT_TABLE()


SchematicPanel::SchematicPanel(MainFrame *mainFrame, wxNotebook *parent) : wxPanel(parent), mMainFrame(mainFrame)
{

}