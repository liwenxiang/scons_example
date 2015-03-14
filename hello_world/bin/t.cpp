#include "easylog/easylogging++.h"
INITIALIZE_EASYLOGGINGPP

#include "hello_world/util/unit.h"
int main() {
    LOG(INFO) << "My first info log using default logger";

    el::Logger* defaultLogger = el::Loggers::getLogger("default");

    Unit tool;
    defaultLogger->info("result is %d", tool.add(1, 100));

    return 0;
}
