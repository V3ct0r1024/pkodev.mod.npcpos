#include <Windows.h>
#include <detours.h>

#include <cstdio>

#include "loader.h"

namespace pkodev
{
    // 3D-vector
    struct D3DXVECTOR3
    {
        float x;
        float y;
        float z;
    };

    namespace address
    {
        // Game.exe 0 (1222073761)
        namespace GAME_13X_0
        {
            // void CHeadSay::Render(D3DXVECTOR3& pos)
            const unsigned int CHeadSay__Render = 0x00470690;

            // CGuiFont
            const unsigned int CGuiFont = 0x0066A730;

            // void CGuiFont::BRender(unsigned int nIndex, const char* str, int x, int y, DWORD color, DWORD shadow)
            const unsigned int CGuiFont__BRender = 0x0046FF70;

            // MPRender
            const unsigned int MPRender = 0x006007DC;

            // BOOL MPRender::WorldToScreen(float fX, float fY, float fZ, int *pnX, int *pnY)
            const unsigned int MPRender__WorldToScreen = 0x00600658;

            // CMPFont
            const unsigned int CMPFont = 0x0066A740;

            // SIZE* CMPFont::GetTextSize(char* szText, SIZE* pSize,float fScale = 1.0f);
            const unsigned int CMPFont__GetTextSize = 0x00600710;
        }

        // Game.exe 1 (1243412597)
        namespace GAME_13X_1
        {
            // void CHeadSay::Render(D3DXVECTOR3& pos)
            const unsigned int CHeadSay__Render = 0x004706D0;

            // CGuiFont
            const unsigned int CGuiFont = 0x0066A730;

            // void CGuiFont::BRender(unsigned int nIndex, const char* str, int x, int y, DWORD color, DWORD shadow)
            const unsigned int CGuiFont__BRender = 0x0046FFB0;

            // MPRender
            const unsigned int MPRender = 0x006007DC;

            // BOOL MPRender::WorldToScreen(float fX, float fY, float fZ, int *pnX, int *pnY)
            const unsigned int MPRender__WorldToScreen = 0x00600658;

            // CMPFont
            const unsigned int CMPFont = 0x0066A740;

            // SIZE* CMPFont::GetTextSize(char* szText, SIZE* pSize,float fScale = 1.0f);
            const unsigned int CMPFont__GetTextSize = 0x00600710;
        }

        // Game.exe 2 (1252912474)
        namespace GAME_13X_2
        {
            // void CHeadSay::Render(D3DXVECTOR3& pos)
            const unsigned int CHeadSay__Render = 0x00470770;

            // CGuiFont
            const unsigned int CGuiFont = 0x0066A730;

            // void CGuiFont::BRender(unsigned int nIndex, const char* str, int x, int y, DWORD color, DWORD shadow)
            const unsigned int CGuiFont__BRender = 0x00470050;

            // MPRender
            const unsigned int MPRender = 0x006007DC;

            // BOOL MPRender::WorldToScreen(float fX, float fY, float fZ, int *pnX, int *pnY)
            const unsigned int MPRender__WorldToScreen = 0x00600658;

            // CMPFont
            const unsigned int CMPFont = 0x0066A740;

            // SIZE* CMPFont::GetTextSize(char* szText, SIZE* pSize,float fScale = 1.0f);
            const unsigned int CMPFont__GetTextSize = 0x00600710;
        }

        // Game.exe 3 (1244511158)
        namespace GAME_13X_3
        {

            // void CHeadSay::Render(D3DXVECTOR3& pos)
            const unsigned int CHeadSay__Render = 0x00470760;

            // CGuiFont
            const unsigned int CGuiFont = 0x0066A730;

            // void CGuiFont::BRender(unsigned int nIndex, const char* str, int x, int y, DWORD color, DWORD shadow)
            const unsigned int CGuiFont__BRender = 0x00470040;

            // MPRender
            const unsigned int MPRender = 0x006007DC;

            // BOOL MPRender::WorldToScreen(float fX, float fY, float fZ, int *pnX, int *pnY)
            const unsigned int MPRender__WorldToScreen = 0x00600658;

            // CMPFont
            const unsigned int CMPFont = 0x0066A740;

            // SIZE* CMPFont::GetTextSize(char* szText, SIZE* pSize,float fScale = 1.0f);
            const unsigned int CMPFont__GetTextSize = 0x00600710;
        }

        // Game.exe 4 (1585009030)
        namespace GAME_13X_4
        {

            // void CHeadSay::Render(D3DXVECTOR3& pos)
            const unsigned int CHeadSay__Render = 0x004707D0;

            // CGuiFont
            const unsigned int CGuiFont = 0x0066A748;

            // void CGuiFont::BRender(unsigned int nIndex, const char* str, int x, int y, DWORD color, DWORD shadow)
            const unsigned int CGuiFont__BRender = 0x00470150;

            // MPRender
            const unsigned int MPRender = 0x006007DC;

            // BOOL MPRender::WorldToScreen(float fX, float fY, float fZ, int *pnX, int *pnY)
            const unsigned int MPRender__WorldToScreen = 0x00600658;

            // CMPFont
            const unsigned int CMPFont = 0x0066A758;

            // SIZE* CMPFont::GetTextSize(char* szText, SIZE* pSize,float fScale = 1.0f);
            const unsigned int CMPFont__GetTextSize = 0x00600710;
        }

        // Game.exe 5 (1207214236)
        namespace GAME_13X_5
        {

            // void CHeadSay::Render(D3DXVECTOR3& pos)
            const unsigned int CHeadSay__Render = 0x00470360;

            // CGuiFont
            const unsigned int CGuiFont = 0x0066A738;

            // void CGuiFont::BRender(unsigned int nIndex, const char* str, int x, int y, DWORD color, DWORD shadow)
            const unsigned int CGuiFont__BRender = 0x0046FC40;

            // MPRender
            const unsigned int MPRender = 0x006007DC;

            // BOOL MPRender::WorldToScreen(float fX, float fY, float fZ, int *pnX, int *pnY)
            const unsigned int MPRender__WorldToScreen = 0x00600658;

            // CMPFont
            const unsigned int CMPFont = 0x0066A748;

            // SIZE* CMPFont::GetTextSize(char* szText, SIZE* pSize,float fScale = 1.0f);
            const unsigned int CMPFont__GetTextSize = 0x00600710;
        }
    }

    namespace pointer
    {
        // void CHeadSay::Render(D3DXVECTOR3& pos)
        typedef void(__thiscall* CHeadSay__Render__Ptr)(void*, D3DXVECTOR3&);
        CHeadSay__Render__Ptr CHeadSay__Render = (CHeadSay__Render__Ptr)(void*)(address::MOD_EXE_VERSION::CHeadSay__Render);

        // void CGuiFont::BRender(unsigned int nIndex, const char* str, int x, int y, DWORD color, DWORD shadow)
        typedef void(__thiscall* CGuiFont_BRender_Ptr)(void*, const char*, int, int, int, int);
        CGuiFont_BRender_Ptr CGuiFont_BRender = (CGuiFont_BRender_Ptr)(void*)(address::MOD_EXE_VERSION::CGuiFont__BRender);

        // BOOL MPRender::WorldToScreen(float fX, float fY, float fZ, int *pnX, int *pnY)
        typedef bool(__thiscall* MPRender__WorldToScreen__Ptr)(void*, float, float, float, int*, int*);
        MPRender__WorldToScreen__Ptr MPRender__WorldToScreen = reinterpret_cast<MPRender__WorldToScreen__Ptr>(*reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::MPRender__WorldToScreen));

        // SIZE* CMPFont::GetTextSize(char* szText, SIZE* pSize, float fScale = 1.0f);
        typedef tagSIZE* (__thiscall* CMPFont__GetTextSize__Ptr)(void*, char*, tagSIZE*, float);
        CMPFont__GetTextSize__Ptr CMPFont__GetTextSize = reinterpret_cast<CMPFont__GetTextSize__Ptr>(*reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::CMPFont__GetTextSize));
    }

    namespace hook
    {
        // void CHeadSay::Render(D3DXVECTOR3& pos)
        void __fastcall CHeadSay__Render(void* This, void* NotUsed, D3DXVECTOR3& Pos);
    }
}

// Entry point
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    // Nothing to do . . .
    return TRUE;
}

// Get mod information
void GetModInformation(mod_info& info)
{
    strcpy_s(info.name, TOSTRING(MOD_NAME));
    strcpy_s(info.version, TOSTRING(MOD_VERSION));
    strcpy_s(info.author, TOSTRING(MOD_AUTHOR));
    info.exe_version = MOD_EXE_VERSION;
}

// Start the mod
void Start(const char* path)
{
    // Enable hooks
    DetourRestoreAfterWith();
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)pkodev::pointer::CHeadSay__Render, pkodev::hook::CHeadSay__Render);
    DetourTransactionCommit();
}

// Stop the mod
void Stop()
{
    // Disable hooks
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourDetach(&(PVOID&)pkodev::pointer::CHeadSay__Render, pkodev::hook::CHeadSay__Render);
    DetourTransactionCommit();
}

// void CHeadSay::Render(D3DXVECTOR3& pos)
void __fastcall pkodev::hook::CHeadSay__Render(void* This, void* NotUsed, pkodev::D3DXVECTOR3& Pos)
{
    // Call original function
    pkodev::pointer::CHeadSay__Render(This, Pos);

	// Get pointer to the current character
	void* cha = reinterpret_cast<void*> (
		*reinterpret_cast<unsigned int*>(
			reinterpret_cast<unsigned int>(This) + 0x28
		)
	);

	// Get the character's type
	unsigned int type = *reinterpret_cast<unsigned int*>(
		reinterpret_cast<unsigned int>(cha) + 0x0CD8
	);

	// Check that the character is NPC
	if ( type == 2 )
	{
		// Get NPC coordinates
		unsigned int x = *reinterpret_cast<unsigned int*>(reinterpret_cast<unsigned int>(cha) + 0x24) / 100;
		unsigned int y = *reinterpret_cast<unsigned int*>(reinterpret_cast<unsigned int>(cha) + 0x28) / 100;

		// Buffer for NPC position string
		static char buf[16] { 0x00 };

        // Build NPC position string
		sprintf_s(buf, sizeof(buf), "(%d, %d)", x, y);

        // NPC coordinates string position on the screen
		int screen_x = 0;
		int screen_y = 0;

        // Get label position
        pkodev::pointer::MPRender__WorldToScreen(
            reinterpret_cast<void*>(
                *reinterpret_cast<unsigned int*>(
                    pkodev::address::MOD_EXE_VERSION::MPRender
                )
            ),
            Pos.x,
            Pos.y,
            Pos.z,
            &screen_x,
            &screen_y
        );

        // Get label text size
        tagSIZE size{ 0x00 };
        pkodev::pointer::CMPFont__GetTextSize
        (
            reinterpret_cast<void*>(
                *reinterpret_cast<unsigned int*>(
                    pkodev::address::MOD_EXE_VERSION::CMPFont
                )
            ),
            const_cast<char*>(buf),
            &size,
            1.0f
        );

        // Aligning the coordinates
        screen_x = screen_x - size.cx / 2 + 5;
        screen_y = screen_y + 15;

        // Draw the text label with NPC position
        pkodev::pointer::CGuiFont_BRender(
            reinterpret_cast<void*>(pkodev::address::MOD_EXE_VERSION::CGuiFont),
            buf,
            screen_x,
            screen_y,
            0xFFFFFFFF,
            0xFF000000
        );

		// Set NPC name color
		*reinterpret_cast<unsigned int*>(
			reinterpret_cast<unsigned int*>(This) + 0x0E
		) = 0xFFFFFF00;
	}
}