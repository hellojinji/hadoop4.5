#include "IFastString.h"
#include "FastString.h"
#include <iostream>
using namespace std;
IFastString::IFastString(void)
{

	char a[10] = "fdfd";
	IFastString *pFS = CreateObject(a);
	int len = pFS->Length();
	delete pFS;
	bool b = _CrtDumpMemoryLeaks(); // ¼à¿Øº¯Êý 
	cout << b << endl;

}


IFastString::~IFastString()
{
}
