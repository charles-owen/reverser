/**
 * @file Schematic.h
 * @author Charles Owen
 *
 * Represents the board schematic and the loaded .sch file (if any)
 */

#ifndef REVERSER_SCHEMATIC_H
#define REVERSER_SCHEMATIC_H

#include "../EagleDOM.h"

/**
 * Represents the board schematic and the loaded .sch file (if any)
 */
class Schematic : public EagleDOM {
private:


public:


    bool Load(const std::wstring& path);
};

#endif //REVERSER_SCHEMATIC_H
