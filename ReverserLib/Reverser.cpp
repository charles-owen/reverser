/**
 * @file
 */

#include "pch.h"

#include "Reverser.h"
#include "Model.h"
#include "ReverserConfig.h"


/**
 * Constructor
 */
Reverser::Reverser(MainFrame *mainFrame) :
    mMainFrame(mainFrame)
{
    mModel = std::make_shared<Model>(this);
}

/**
 * Get the program version
 * @return Program version
 */
wxString Reverser::Version()
{
   return wxString::Format(L"%d.%02d", REVERSER_VERSION_MAJOR, REVERSER_VERSION_MINOR);
}


bool Reverser::Load(wxString path)
{
    mLayouts.Load(path);
    mParts.Load(path, &mLayouts, &mSymbols);
    return true;
}
