#pragma once
#include "IFastString.h"
class  FastString :public IFastString
{
public:
	int a;
	int b;
	char * m_psz;
public:
	FastString(char*psz);
	~FastString(void);
	virtual  int __stdcall Length(void);
	virtual int __stdcall Find(char*psz);

	

	virtual int fb();
	virtual	int fa();
};
extern"C" __declspec(dllexport) IFastString* CreateObject(char* psz);