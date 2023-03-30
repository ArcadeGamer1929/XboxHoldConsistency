// XboxHoldConsistency
// version 1.0, for MM+ v1.03
// Made by ArcadeGamer1929

#include <Windows.h>
#include <stdint.h>
#include "Helpers.h"
#include "SigScan.h"

SIG_SCAN(
    sigSyncIconXBTN2,
    0x140273814,
    "\xBB\xD0\x08\x00\x00\xEB\x05",
    "xxxxxxx"
);

extern "C" __declspec(dllexport) void PreInit() {
    WRITE_MEMORY((size_t)sigSyncIconXBTN2() + 0x01, uint32_t, 54184);
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    return TRUE;
}
