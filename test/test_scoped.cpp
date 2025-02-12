#include "gtest/gtest.h"
#include "func.hpp"

void myfunction(int x){

     EXPECT_EQ(x ,1);
}


TEST(TEST_SUIT1, TESTCASE1)
{{

    SCOPED_TRACE("1*********");
    myfunction(2);
}
{

        SCOPED_TRACE("2*********");

    myfunction(3);
}
{

        SCOPED_TRACE("3*********");

    myfunction(4);
}
}
