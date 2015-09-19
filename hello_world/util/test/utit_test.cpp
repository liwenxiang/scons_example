#include "hello_world/util/unit.h"
#include <vector>
#include <gtest/gtest.h>

using std::vector;

TEST(UnitTest, Add) {
    Unit tool;
    EXPECT_EQ(tool.add(-1, -4), -5);
    EXPECT_EQ(tool.add(1, 4), 5);
}
