/**
 * @file BoardTest.cpp
 * @author Charles Owen
 */
 
#include <pch.h>
#include "gtest/gtest.h"

#include <board/Board.h>

TEST(BoardTest, ExampleTest){
    Board board;

    ASSERT_TRUE(board.EagleLoad(L"Tests/test-data/example-brd.brd"));


}
