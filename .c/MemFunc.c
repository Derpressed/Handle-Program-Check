#include "headers.h"
#include <stdint.h>

int readAtAddr(Process* prog, LPCVOID addr, uint8_t* data) {
    return ReadProcessMemory(prog->progHandle, addr, data, sizeof(data), NULL);
}


