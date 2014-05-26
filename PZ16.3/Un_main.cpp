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
        Resize(Btn_addCol);
        Resize(Btn_addRow);
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

void __fastcall TForm1::Btn_addColClick(TObject *Sender)
{
        StringGrid1->ColCount++;
        StringGrid1->ColWidths[StringGrid1->ColCount - 1] = StringGrid1->ColWidths[0];
        StringGrid1->Cells[StringGrid1->ColCount - 1][0] = IntToStr(StringGrid1->ColCount - 1);
        Validate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Btn_addRowClick(TObject *Sender)
{
        StringGrid1->RowCount++;
        StringGrid1->RowHeights[StringGrid1->RowCount - 1] = StringGrid1->RowHeights[0];
        StringGrid1->Cells[0][StringGrid1->RowCount - 1] = IntToStr(StringGrid1->RowCount - 1);
        Validate();
}
//---------------------------------------------------------------------------

void TForm1::Validate() {
        Btn_addCol->Enabled  = StringGrid1->ColCount < 20;
        Btn_addRow->Enabled =  StringGrid1->RowCount < 24;
        Btn_removeCol->Enabled = StringGrid1->ColCount > 2;
        Btn_removeRow->Enabled = StringGrid1->RowCount > 2;

        Btn_addRow->Top = StringGrid1->Top + (StringGrid1->RowHeights[0] + 1) * StringGrid1->RowCount;
        Btn_removeRow->Top = Btn_addRow->Top;

        Btn_addCol->Left = StringGrid1->Left + (StringGrid1->ColWidths[0] + 1) * StringGrid1->ColCount;
        Btn_removeCol->Left = Btn_addCol->Left;

        StringGrid1->Height = (StringGrid1->RowHeights[0] + 1) * StringGrid1->RowCount + 5;
        StringGrid1->Width = (StringGrid1->ColWidths[0] + 1) * StringGrid1->ColCount + 5;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Btn_removeColClick(TObject *Sender)
{
        StringGrid1->ColCount--;
        Validate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Btn_removeRowClick(TObject *Sender)
{
        StringGrid1->RowCount--;
        Validate();
}

//---------------------------------------------------------------------------

