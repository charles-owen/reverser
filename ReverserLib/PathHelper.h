/**
 * @file PathHelper.h
 * @author Charles Owen
 *
 * Helper functions for manipulation of directory paths.
 */

#ifndef REVERSER_PATHHELPER_H
#define REVERSER_PATHHELPER_H

/**
 * Helper functions for manipulation of directory paths.
 */
class PathHelper {
public:

    static std::wstring GetRelativePath(const std::wstring& designPath, const std::wstring& path);
};

#endif //REVERSER_PATHHELPER_H
