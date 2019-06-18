#pragma once
#define INRANGE(x,a,b)    (x >= a && x <= b) 
#define getBits( x )    (INRANGE((x&(~0x20)),'A','F') ? ((x&(~0x20)) - 'A' + 0xa) : (INRANGE(x,'0','9') ? x - '0' : 0))
#define getByte( x )    (getBits(x[0]) << 4 | getBits(x[1]))

namespace U
{
	extern CNetVarManager* NetVars;
	extern void Setup();
	extern void SetupI();
	extern void SetupOffsets();
	extern void SetupHooks();
	extern DWORD FindPattern(std::string moduleName, std::string pattern);

	template <typename T>
	T GetVFunc(void* vTable, int iIndex) {
		return (*(T * *)vTable)[iIndex];
	}

	template <typename T>
	T* CaptureInterface(std::string strModule, std::string strInterface)
	{
		typedef T* (*CreateInterfaceFn)(const char* szName, int iReturn);
		CreateInterfaceFn CreateInterface = (CreateInterfaceFn)GetProcAddress(GetModuleHandleA(strModule.c_str()), ("CreateInterface"));

		return CreateInterface(strInterface.c_str(), 0);
	}
}