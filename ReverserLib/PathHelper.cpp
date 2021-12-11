/**
 * @file PathHelper.cpp
 * @author Charles Owen
 */

#include "pch.h"
#include <wx/filename.h>
#include "PathHelper.h"

/**
 * Return the path to the file relative to the design file path
 * @param designPath Design file path
 * @param path Path to convert
 * @return Relative path
 */
std::wstring PathHelper::GetRelativePath(const std::wstring& designPath, const std::wstring& path)
{
    //
    // Convert filename to be relative to the directory containing the .rvrs file
    //
    wxFileName dp(designPath);
    auto dirPath = dp.GetPath();

    wxFileName p(path);
    p.MakeRelativeTo(dirPath);

    return p.GetFullPath().ToStdWstring();
}