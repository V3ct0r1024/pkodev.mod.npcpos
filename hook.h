#pragma once
#include "structure.h"

namespace pkodev { namespace hook {

	// void CHeadSay::Render(D3DXVECTOR3& pos)
	void __fastcall CHeadSay__Render(void* This, void*, structure::D3DXVECTOR3& Pos);

} }