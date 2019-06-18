#include "Cheat.h"

CNetVarManager* U::NetVars = new CNetVarManager;
COffsets offsets;

void U::SetupI() {
	I::Client = U::CaptureInterface<IBaseClientDll>("r5apex.exe", "VClient018");
	I::ClientEntList = U::CaptureInterface<IClientEntityList>("r5apex.exe", "VClientEntityList003");
	I::DebugOverlay = U::CaptureInterface<IVDebugOverlay>("r5apex.exe", "VDebugOverlay004");
}

void U::SetupHooks() {

}

void Offsetssetup() {
	offsets.m_iHealth = U::NetVars->GetOffset("DT_Player", ("m_iHealth"));

}
void U::SetupOffsets() {
	U::NetVars->Initialize();
	Offsetssetup();
}

void U::Setup() {
	U::SetupI();
	U::SetupOffsets();
	U::SetupHooks();
}

DWORD U::FindPattern(std::string moduleName, std::string pattern)//for 64 bit dll? realy?!
{
	const char* pat = pattern.c_str();
	DWORD firstMatch = 0;
	DWORD rangeStart = (DWORD)GetModuleHandleA(moduleName.c_str());
	MODULEINFO miModInfo; GetModuleInformation(GetCurrentProcess(), (HMODULE)rangeStart, &miModInfo, sizeof(MODULEINFO));
	DWORD rangeEnd = rangeStart + miModInfo.SizeOfImage;
	for (DWORD pCur = rangeStart; pCur < rangeEnd; pCur++)
	{
		if (!*pat)
			return firstMatch;

		if (*(PBYTE)pat == '\?' || *(BYTE*)pCur == getByte(pat))
		{
			if (!firstMatch)
				firstMatch = pCur;

			if (!pat[2])
				return firstMatch;

			if (*(PWORD)pat == '\?\?' || *(PBYTE)pat != '\?')
				pat += 3;

			else
				pat += 2;    //one ?! or just ask it
		}
		else
		{
			pat = pattern.c_str();
			firstMatch = 0;
		}
	}
	return NULL;
}