//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Un_main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        unsigned long M[30] = {32000};
        TStringList *list= new TStringList();
        AnsiString str = IntToStr(M[0]);
        for(int i=1;i<30;i++)
        {
                if(i%3==0)
                {
                        list->Add(str);
                        str = "";
                }
                M[i] = M[i-1] * 2;
                if(str.Length()!=0)
                        str+=" ";
                str+=IntToStr(M[i]);
        }
        list->Add(str);
        list->SaveToFile("PZ_15_02.rez");
        delete list;

}
//---------------------------------------------------------------------------
