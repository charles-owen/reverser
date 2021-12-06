/**
 * @file
 * Main Reverser system class.
 */

#ifndef REVERSER_REVERSER_H
#define REVERSER_REVERSER_H

#include <memory>

#include "components/Parts.h"
#include "components/Layouts.h"
#include "components/Symbols.h"

class MainFrame;
class Design;

/**
 * Main Reverser system class.
 */
class Reverser final
{
public:
    Reverser(MainFrame *mainFrame);

    std::shared_ptr<Design> GetDesign() { return mDesign; }

    wxString Version();

private:
    /// The main program frame
    MainFrame *mMainFrame;

    /// The currently loaded design
    std::shared_ptr<Design> mDesign;
};

#endif //REVERSER_REVERSER_H
