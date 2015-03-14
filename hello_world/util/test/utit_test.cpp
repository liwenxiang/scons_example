#include <vector>
#include "hello_world/util/unit.h"
#include "catch/catch.hpp"
#include "easylog/easylogging++.h"

using std::vector;

TEST_CASE("unit测试", "加法") {
    LOG(INFO) << "My first info log using default logger";
    Unit tool;
    SECTION("负数") {
        REQUIRE(tool.add(-1, -4) == -5);
    }
    SECTION("正数") {
        REQUIRE( tool.add(1, 4) == 5);
    }
}
