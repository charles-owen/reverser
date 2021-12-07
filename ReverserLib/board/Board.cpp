/**
 * @file Board.cpp
 * @author Charles Owen
 */

#include "../pch.h"
#include "Board.h"

bool Board::Load(const std::wstring& path)
{
    if(!EagleDOM::Load(path))
    {
        return false;
    }

    return true;
}