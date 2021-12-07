/**
 * @file EagleDOM.cpp
 * @author Charles Owen
 */

#include "EagleDOM.h"

bool EagleDOM::Load(const std::wstring& path)
{
    if(!mDOM.Load(path))
    {
       return false;
    }

    mPath = path;
    return true;
}
