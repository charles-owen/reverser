/**
 * @file
 */

#include "pch.h"

#include "Reverser.h"
#include "design/Design.h"
#include "ReverserConfig.h"


/**
 * Constructor
 */
Reverser::Reverser(MainFrame *mainFrame) :
    mMainFrame(mainFrame)
{
    mDesign = std::make_shared<Design>(this);
}

/**
 * Get the program version
 * @return Program version
 */
wxString Reverser::Version()
{
   return wxString::Format(L"%d.%02d", REVERSER_VERSION_MAJOR, REVERSER_VERSION_MINOR);
}


void Reverser::FileSave(wxWindow* mainFrame, const wxString& path)
{
    mDesign->Save(mainFrame, path);
}

void Reverser::FileOpen(wxWindow* mainFrame, const wxString& path)
{
    auto design = std::make_shared<Design>(this);
    design->Load(mainFrame, path);

    mDesign = design;
}