/**
 * @file Schematic.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Schematic.h"


bool Schematic::Load(const std::wstring& path)
{
    if(!EagleDOM::Load(path))
    {
        return false;
    }

    return true;
}