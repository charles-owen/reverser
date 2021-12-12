/**
 * @file XmlHelperTest.cpp
 * @author Charles Owen
 */

#include <pch.h>
#include "gtest/gtest.h"

#include <XmlHelper.h>

TEST(XmlHelperTest, Find)
{
    wxXmlDocument doc;
    ASSERT_TRUE(doc.Load("Tests/test-data/example-brd.brd"));

    auto root = doc.GetRoot();

    auto drawing = XmlHelper::Find(root, L"drawing");
    ASSERT_EQ(L"drawing", drawing->GetName());

    auto board = XmlHelper::Find(root, L"drawing/board");
    ASSERT_EQ(L"board", board->GetName());

    auto libraries = XmlHelper::Find(root, L"drawing/board/libraries");
    ASSERT_EQ(L"libraries", libraries->GetName());

    auto bad = XmlHelper::Find(root, L"xxxx");
    ASSERT_EQ(nullptr, bad);

    bad = XmlHelper::Find(root, L"drawing/xxxx");
    ASSERT_EQ(nullptr, bad);



//    auto drawing1 = XmlHelper::Find(root, );
//    ASSERT_EQ(L"drawing", drawing1->GetName());


}