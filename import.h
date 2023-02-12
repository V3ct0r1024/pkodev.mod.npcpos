#pragma once
#include "structure.h"

namespace pkodev {

	class import final
	{
		public:
            // void CHeadSay::Render(D3DXVECTOR3& pos)
            typedef void(__thiscall* CHeadSay__Render__Ptr)(void*, structure::D3DXVECTOR3&);
            static CHeadSay__Render__Ptr CHeadSay__Render;

            // void CGuiFont::BRender(unsigned int nIndex, const char* str, int x, int y, DWORD color, DWORD shadow)
            typedef void(__thiscall* CGuiFont__BRender__Ptr)(void*, const char*, int, int, unsigned int, unsigned int);
            static CGuiFont__BRender__Ptr CGuiFont__BRender;

            // BOOL MPRender::WorldToScreen(float fX, float fY, float fZ, int *pnX, int *pnY)
            typedef bool(__thiscall* MPRender__WorldToScreen__Ptr)(void*, float, float, float, int*, int*);
            static MPRender__WorldToScreen__Ptr MPRender__WorldToScreen;

            // SIZE* CMPFont::GetTextSize(char* szText, SIZE* pSize, float fScale = 1.0f);
            typedef structure::SIZE* (__thiscall* CMPFont__GetTextSize__Ptr)(void*, const char*, structure::SIZE*, float);
            static CMPFont__GetTextSize__Ptr CMPFont__GetTextSize;
	};

}



