#include "ProcessParameters.h"
#include <stdio.h>


int main() {
    Process program = {
        .appName = "RobloxPlayerBeta.exe"
    };

    getProcessHandle(&program);
    getProcessModule(&program);
    printStruct(&program);
    
    
    getchar();
    return 0;
}
