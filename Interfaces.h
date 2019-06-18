#pragma once
#include "IBaseClientDLL.h"
#include "IClientEntityList.h"
#include "IDebugOverlay.h"
#include "IVpanel.h"

namespace I // Interfaces
{
	extern IBaseClientDll* Client;
	extern IClientEntityList* ClientEntList;
	extern IVDebugOverlay* DebugOverlay;
	extern IVPanel* VPanel;
}