/**
 * @file SymbolsTest.cpp
 * @author Charles Owen
 */

#include <pch.h>
#include "gtest/gtest.h"

#include <parts/Symbols.h>
#include <parts/Symbol.h>

TEST(SymbolsTest, XmlLoad){
    Symbols symbols;

    wxXmlDocument dom;
    ASSERT_TRUE(dom.Load(L"Tests/test-data/example-sch.sch"));

    auto root = dom.GetRoot();
    ASSERT_TRUE(symbols.XmlLoad(root));

    auto symbol = symbols.Find(L"owen-library", L"HD6821P");
    ASSERT_EQ(L"HD6821P", symbol->GetName());
    ASSERT_EQ(L"owen-library", symbol->GetLibrary());
}

