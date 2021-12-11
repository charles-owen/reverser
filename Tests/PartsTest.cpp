
#include "gtest/gtest.h"
#include "save/Parts.h"
#include "save/Part.h"

#include "save/Layouts.h"
#include "save/Symbols.h"

class PartsTestFixture : public testing::Test
{
protected:
    virtual void SetUp()
    {
        // Load example layout data
        layouts.Load(L"Tests/test-lib/", true);
    }

    virtual void TearDown()
    {
    }

    Layouts layouts;
    Symbols symbols;
};

TEST_F(PartsTestFixture, Load)
{
    Parts parts;

    EXPECT_TRUE(parts.Load(L"Tests/test-lib/", &layouts, &symbols, true));

}