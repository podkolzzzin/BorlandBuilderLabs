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
        Resize(this);
        Resize(Button1);
        Resize(StringGrid1);
        for(int i=0;i<StringGrid1->RowCount;i++) {
                StringGrid1->RowHeights[i] = 32;
                if(i!=0)
                        StringGrid1->Cells[0][i] = IntToStr(i);
        }

        for(int i=0;i<StringGrid1->ColCount;i++) {
                 if(i!=0)
                        StringGrid1->Cells[i][0] = IntToStr(i);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        AnsiString str1 = "Включить";
        AnsiString str2 = "Выключить";
        if(Button1->Caption == str1)
        {
                Button1->Caption = str2;
                StringGrid1->Options = StringGrid1->Options << goEditing;
        }
        else
        {
                Button1->Caption = str1;
                StringGrid1->Options = StringGrid1->Options << goEditing;
        }
}

void TForm1::Resize(TControl* cnt)
{
        static bool first = true;

        double kx = 1920 / Screen->Width;
        double ky = 1200 / Screen->Height;

        if(first)
                Font->Height /= ky;

        cnt->Width /= kx;
        cnt->Height /= ky;
        cnt->Left /= kx;
        cnt->Top /= ky;
}
//---------------------------------------------------------------------------

