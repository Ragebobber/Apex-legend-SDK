#pragma once

class IClientNetworkable;
class IClientEntityList
{
public:
	virtual void sub_7FF7D3CCCC10() = 0;
	virtual void Function0() = 0;
	virtual void vtablepad0x1() = 0;
	virtual void vtablepad0x2() = 0;
	virtual CBaseEntity* GetClientEntity(int iIndex) = 0;
	virtual CBaseEntity* GetClientEntityFromHandle(HANDLE hHandle) = 0;
	virtual void Unknown() = 0;
	virtual void sub_7FF7D3CCCC90() = 0;
	virtual void sub_7FF7D3CCCC80() = 0;
	virtual void sub_7FF7D3C54170() = 0;
	virtual int   GetMaxEntities() = 0;
};