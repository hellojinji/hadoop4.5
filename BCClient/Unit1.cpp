//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//#include "FastString.h"
#include "IFastString.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
       IFastString *pFS=CreateObject("fddfd");
          int len=pFS->Length();
          delete pFS;


	//int res = pFS->Length();
}
//---------------------------------------------------------------------------
 