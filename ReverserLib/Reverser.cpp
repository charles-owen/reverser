/**
 * @file
 */

#include "pch.h"

#include "Reverser.h"
#include "Design.h"
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

