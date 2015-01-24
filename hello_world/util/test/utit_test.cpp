#include <vector>
#include "hello_world/util/unit.h"
#include "catch/catch.hpp"

using std::vector;

TEST_CASE("unit测试", "加法") {
    Unit tool;
    SECTION("负数") {
        REQUIRE(tool.add(-1, -4) == -2);
    }
    SECTION("正数") {
        REQUIRE( tool.add(1, 4) == 4);
    }
}
