// FastStringDll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "header.h"
#include "FastStringDll.h"


// 这是导出变量的一个示例
FASTSTRINGDLL_API int nFastStringDll=0;

// 这是导出函数的一个示例。
FASTSTRINGDLL_API int fnFastStringDll(void)
{
    return 42;
}

// 这是已导出类的构造函数。
CFastStringDll::CFastStringDll()
{
    return;
}
