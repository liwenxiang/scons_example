#include <stdlib.h>
#include <iostream>
#include "easylog/easylog.h"
#include "hello_world/util/unit.h"

INITIALIZE_EASYLOGGINGPP
int main ( int argc, char *argv[] )
{
    Unit x;
    LOG(INFO) << "My first info log using default logger";
    std::cout << x.add(1, 2) << std::endl;
    return EXIT_SUCCESS;
}		
