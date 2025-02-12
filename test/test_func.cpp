#include "gtest/gtest.h"
#include "func.hpp"

TEST(TEST_SUIT1, TESTCASE1)
{
    EXPECT_EQ(add_int(2, 3), 5);

}

TEST(TEST_SUIT1, TESTCASE2)
{
    EXPECT_EQ(add_int(2, 2), 4);
}

// TEST(TEST_SUIT1, TESTCASE3)
// {
//     SCOPED_TRACE("ss*********");
//     SCOPED_TRACE("bb----------------");
//     int x = 2;
//     int y = 3;
//     EXPECT_PRED2(int_is_eual,x, y);


// }
TEST(TEST_SUIT1, TESTCASE4)
{
        int x = 2;
    int y = 3;
    EXPECT_TRUE(int_is_eual(x, y));

}


// TEST(TEST_SUIT2, TESTCASE1)
// {
//     EXPECT_EQ(add_int(2, 3), 5);
// }

// TEST(TEST_SUIT2, TESTCASE2)
// {
//     EXPECT_EQ(add_int(2, 2), 5);
// }
