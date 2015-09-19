#include <vector>
#include <string>
#include "hello_world/util/unit.h"
#include "log4z/log4z.h"

using std::string;
int Unit::add(int x, int y) {
    int result = x + y;
    LOGFMTD("input x %d y %d, result is %d", x, y, result);
    return result;
}
