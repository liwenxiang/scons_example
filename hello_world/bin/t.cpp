#include <stdlib.h>
#include <iostream>
#include "log4z/log4z.h"
#include "hello_world/util/unit.h"
using namespace zsummer::log4z;

int main ( int argc, char *argv[] )
{
    Unit x;
    int i = 0;
    ILog4zManager::getRef().start();
    LOGD("debug stream" << i);
    LOGI("info stream" << i);

    LOGFMTD("debug stream %d", i);
    LOGFMTD("info stream %d", i);
    LOGFMTE("error stream %d", x.add(1,2));
    return EXIT_SUCCESS;
}		
