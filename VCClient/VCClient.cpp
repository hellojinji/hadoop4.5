// VCClient.cpp : 定义控制台应用程序的入口点。
//
#include "pch.h"
#include "FastString.h"
#include<iostream>
using namespace std;
int main()
{
	//char* a = "fdfd";

	char a[10] = "fdfd";
	FastString *pFS = new FastString(a);
	int res = pFS->Length();

	//pFS->Delete();
	cout << res << endl;



	//cout << "a:2" << endl;
	//cout <<  "b:5"<< endl;


	
	return 0;
}
