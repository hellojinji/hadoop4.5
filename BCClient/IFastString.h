#pragma once
class IFastString
{
public:
	IFastString();
	virtual ~IFastString();
	virtual int _stdcall Length(void) = 0;
	virtual int _stdcall Find(char*psz) = 0;
	
};

extern"C" __declspec(dllexport) IFastString* CreateObject(char* psz);