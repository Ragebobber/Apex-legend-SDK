#pragma once

class IBaseClientDll
{
public:
	 
	    virtual void                  sub_7FF7D3CC1130(void) = 0;
		virtual void                  sub_7FF7D3CC1240(void) = 0;
		virtual void                  sub_7FF7D3CC1320(void) = 0;
		virtual void                  sub_7FF7D3CC15F0(void) = 0;
		virtual void                  sub_7FF7D3CC1640(void) = 0;
		virtual void                  dapVtable(void) = 0;
		virtual void                  sub_7FF7D3CC27E0(void) = 0;
		virtual void                  sub_7FF7D3CC28F0(void) = 0;
		virtual void                  sub_7FF7D3CC2E10(void) = 0;
		virtual void                  sub_7FF7D3CC3710(void) = 0;
		virtual ClientClass*           GetAllClasses() = 0;
};