#include "Cheat.h"


void CheatThread()
{
	U::Setup();
}

BOOL APIENTRY DllMain(HMODULE hDll, DWORD dwReason, LPVOID lpReserved)
{

	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
	{
		DisableThreadLibraryCalls((HMODULE)hDll);

		
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)CheatThread, NULL, NULL, NULL);
	

		return TRUE;
	}
	case DLL_PROCESS_DETACH:
	{
		
		ExitProcess(0);
		return TRUE;
	}
	return TRUE;
	}
	return FALSE;
}

