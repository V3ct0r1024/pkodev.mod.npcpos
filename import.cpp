#include "address.h"
#include "import.h"

namespace  pkodev {

	import::CHeadSay__Render__Ptr import::CHeadSay__Render = reinterpret_cast<import::CHeadSay__Render__Ptr>(address::MOD_EXE_VERSION::CHeadSay__Render);
	import::CGuiFont__BRender__Ptr import::CGuiFont__BRender = reinterpret_cast<import::CGuiFont__BRender__Ptr>(address::MOD_EXE_VERSION::CGuiFont__BRender);
	import::MPRender__WorldToScreen__Ptr import::MPRender__WorldToScreen = reinterpret_cast<import::MPRender__WorldToScreen__Ptr>(*reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::MPRender__WorldToScreen));
	import::CMPFont__GetTextSize__Ptr import::CMPFont__GetTextSize = reinterpret_cast<import::CMPFont__GetTextSize__Ptr>(*reinterpret_cast<unsigned int*>(address::MOD_EXE_VERSION::CMPFont__GetTextSize));

}
