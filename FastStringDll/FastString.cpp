
#include "FastString.h"
#include<string.h>
#include<iostream>
#include<windows.h>
using namespace std;


FastString::FastString(char* psz)
	:m_psz(new char[strlen(psz) + 1])
{
	a = 2;
	b = 5;
	
	strcpy_s(m_psz, strlen(psz) + 1, psz); //�����ڴ�
}


FastString::~FastString(void)
{
	delete[]m_psz;
	cout << "delete ����" << endl;
}    //�ͷ��ڴ�

int FastString::Length(void) {
	return strlen(m_psz);
}  //���㳤��

int FastString::Find(char*psz)
{
	return 0;
} //ʡ��, �ⲻ���������۵��ص�.

IFastString* CreateObject(char* psz)
{
	return new FastString(psz);
}
int FastString::fb() {
	cout << "b:2018" << endl;
	return 11;
}
int FastString::fa() {
	cout << "a:2017" << endl;
	return 12;
}

