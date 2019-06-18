#pragma once
class IVPanel
{
public:
	    /*virtual void sub_7FF7D3BD8BD0() = 0;
		virtual void sub_7FF7D3C331A0() = 0;
		virtual void sub_7FF7D3968CA0() = 0;
		virtual void sub_7FF7D3C1A3D0() = 0;
		virtual void sub_7FF7D3C331B0() = 0;
		virtual void sub_7FF7D3C331C0() = 0;
		virtual void sub_7FF7D3C33210() = 0;
		virtual void sub_7FF7D3C33230() = 0;
		virtual void sub_7FF7D3C33240() = 0;
		virtual void sub_7FF7D3C31B60() = 0;
		virtual void sub_7FF7D3C31BF0() = 0;
		virtual void sub_7FF7D3C31C00() = 0;
		virtual void sub_7FF7D3C31C10() = 0;
		virtual void sub_7FF7D3C31C20() = 0;
		virtual void sub_7FF7D3C31C30() = 0;
		virtual void sub_7FF7D3C31C40() = 0;
		virtual void sub_7FF7D3C31CB0() = 0;
		virtual void sub_7FF7D3C31CC0() = 0;
		virtual void sub_7FF7D3C31CD0() = 0;
		virtual void sub_7FF7D3C31CE0() = 0;
		virtual void sub_7FF7D3C31D20() = 0;
		virtual void sub_7FF7D3C327E0() = 0;
		virtual void sub_7FF7D3C32C10() = 0;
		virtual void sub_7FF7D3C31F20() = 0;
		virtual void Somethierd() = 0;
		virtual void sub_7FF7D3C31FB0() = 0;
		virtual void sub_7FF7D3C32010() = 0;
		virtual void sub_7FF7D3C32080() = 0;
		virtual void sub_7FF7D3C320A0() = 0;
		virtual void sub_7FF7D3C321D0() = 0;
		virtual void Maybesecond() = 0;
		virtual void sub_7FF7D3C321C0() = 0;
		virtual void sub_7FF7D3C32310() = 0;
		virtual char* GetName(int iPanel);//34
		virtual void sub_7FF7D3C316A0() = 0;
		virtual void sub_7FF7D3C31D30() = 0;
		virtual void sub_7FF7D3ABCA30() = 0;
		virtual void sub_7FF7D3C32510() = 0;
		virtual void sub_7FF7D3C31ED0() = 0;
		virtual void sub_7FF7D3C31F10() = 0;
		virtual void sub_7FF7D3AD9BE0() = 0;
		virtual void sub_7FF7D3C327C0() = 0;
		virtual void sub_7FF7D3C327D0() = 0;
		virtual void sub_7FF7D3B76840() = 0;
		virtual void sub_7FF7D3C32C20() = 0;
		virtual void sub_7FF7D3C32ED0() = 0;
		virtual void sub_7FF7D3C33180() = 0;
		virtual void sub_7FF7D3C33250() = 0;
		virtual void sub_7FF7D3C33260() = 0;
		virtual void sub_7FF7D3C33270() = 0;
		virtual void sub_7FF7D3C33280() = 0;
		virtual void sub_7FF7D3C33290() = 0;
		virtual void sub_7FF7D3C332B0() = 0;
		virtual void sub_7FF7D3C332D0() = 0;
		virtual void sub_7FF7D3C332E0() = 0;
		virtual void sub_7FF7D3C33310() = 0;
		virtual void sub_7FF7D3C33300() = 0;
		virtual void sub_7FF7D3C332F0() = 0;
		virtual void sub_7FF7D3C331E0() = 0;
		virtual void sub_7FF7D3C331F0() = 0;
		virtual void sub_7FF7D3C33320() = 0;
		virtual void sub_7FF7D3C33330() = 0;
		virtual void sub_7FF7D3C33340() = 0;
		virtual void sub_7FF7D3C31FA0() = 0;*/
	const char* GetName(unsigned int vguiPanel)
	{
		typedef const char* (__thiscall * tGetName)(void*, unsigned int);
		return U::GetVFunc<tGetName>(this, 34)(this, vguiPanel);
	}

};