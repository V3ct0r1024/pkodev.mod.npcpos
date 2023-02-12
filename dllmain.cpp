#include <Windows.h>
#include <detours.h>

#include <format>

#include "loader.h"
#include "address.h"
#include "import.h"
#include "hook.h"
#include "structure.h"
#include "utils.h"

using namespace pkodev;


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    return TRUE;
}

void GetModInformation(mod_info& info)
{
    strcpy_s(info.name, TOSTRING(MOD_NAME));
    strcpy_s(info.version, TOSTRING(MOD_VERSION));
    strcpy_s(info.author, TOSTRING(MOD_AUTHOR));
    info.exe_version = MOD_EXE_VERSION;
}

void Start(const char* path)
{
    DetourRestoreAfterWith();
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(reinterpret_cast<PVOID*>(&import::CHeadSay__Render), reinterpret_cast<PVOID>(&hook::CHeadSay__Render));
    DetourTransactionCommit();
}

void Stop()
{
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourDetach(reinterpret_cast<PVOID*>(&import::CHeadSay__Render), reinterpret_cast<PVOID>(&hook::CHeadSay__Render));
    DetourTransactionCommit();
}

void __fastcall hook::CHeadSay__Render(void* This, void*, structure::D3DXVECTOR3& Pos)
{
    import::CHeadSay__Render(This, Pos);

    const auto cha = utils::get<structure::CCharacter*, 0x28>(This);

    if (cha->IsNpc() == false) { return; }

    const std::string text = std::format("({0}, {1})", cha->GetX(), cha->GetY());

    static structure::Vector2D<int> screen;
    import::MPRender__WorldToScreen(utils::get<void*>(address::MOD_EXE_VERSION::MPRender),
        Pos.x, Pos.y, Pos.z, &screen.x, &screen.y);

    static structure::SIZE size;
    import::CMPFont__GetTextSize(utils::get<void*>(address::MOD_EXE_VERSION::CMPFont),
        text.c_str(), &size, 1.0f);

    screen.x -= size.x / 2 - 5;
    screen.y += 15;

    import::CGuiFont__BRender(reinterpret_cast<void*>(pkodev::address::MOD_EXE_VERSION::CGuiFont),
        text.c_str(), screen.x, screen.y, 0xFFFFFFFF, 0xFF000000);

    utils::set<unsigned int, 0x38>(This, 0xFFFFFF00); // Set NPC color name (Yellow)
}