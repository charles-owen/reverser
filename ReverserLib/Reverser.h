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
class Model;

/**
 * Main Reverser system class.
 */
class Reverser
{
public:
    Reverser(MainFrame *mainFrame);

    std::shared_ptr<Model> GetModel() { return mModel; }

    wxString Version();

    bool Load(wxString path);

    Parts *GetParts() {return &mParts;}

private:
    /// The main program frame
    MainFrame *mMainFrame;

    /// The currently loaded model
    std::shared_ptr<Model> mModel;

    /// The collection of parts
    Parts mParts;

    /// The collection of PCB layouts
    Layouts mLayouts;

    /// The schematic symbols
    Symbols mSymbols;
};

#endif //REVERSER_REVERSER_H
