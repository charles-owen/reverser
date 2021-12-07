/**
 * @file EagleDOM.h
 * @author Charles Owen
 *
 * Eagle document object model format support.
 * Common code between .sch and .brd files
 */

#ifndef REVERSER_EAGLEDOM_H
#define REVERSER_EAGLEDOM_H

#include <wx/xml/xml.h>

/**
 * Eagle document object model format support.
 * Common code between .sch and .brd files
 */
class EagleDOM {
private:
    /// The file path
    std::wstring mPath;

    /// The loaded document object model
    wxXmlDocument mDOM;

protected:
    bool Load(const std::wstring& path);

public:
    auto GetPath() {return mPath;}


};

#endif //REVERSER_EAGLEDOM_H
