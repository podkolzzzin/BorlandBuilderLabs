//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
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
        double kx = Screen->Width / 1920.0;
        double ky = Screen->Height / 1080.0;
        double k = (kx<ky)?kx:ky;
        Font->Height /= ky;

        Resize(Edit1, k, kx, ky);
        Resize(Edit2, k, kx, ky);
        Resize(Label1, k, kx, ky);
        Resize(Lbl_result, k, kx, ky);
        Resize(Btn_add, k, kx, ky);
        Resize(Btn_sub, k, kx, ky);
        Resize(Btn_change, k, kx, ky);
        Resize(Btn_mult, k, kx, ky);
        Resize(Btn_devide, k, kx, ky);
        Resize(Btn_pow, k, kx, ky);
        Resize(this, k, kx, ky);
        
}
//---------------------------------------------------------------------------
void TForm1::Resize(TControl* e, double k, double kx, double ky)
{
        e->Left /= kx;
        e->Top /= ky;
        e->Width /= kx;
        e->Height /= ky;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Btn_changeClick(TObject *Sender)
{
        AnsiString temp = Edit1->Text;
        Edit1->Text = Edit2->Text;
        Edit2->Text = temp;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Btn_addClick(TObject *Sender)
{
        double v1, v2;
        GetDoubles(v1,v2);
        Lbl_result->Caption = FloatToStr(v1 + v2);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Btn_subClick(TObject *Sender)
{
        double v1, v2;
        GetDoubles(v1,v2);
        Lbl_result->Caption = FloatToStr(v1 - v2);
}

void TForm1::GetDoubles(double& v1, double &v2) {
        v1 = StrToFloat(Edit1->Text);
        v2 = StrToFloat(Edit2->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Btn_multClick(TObject *Sender)
{
        double v1, v2;
        GetDoubles(v1,v2);
        Lbl_result->Caption = FloatToStr(v1 * v2);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Btn_devideClick(TObject *Sender)
{
        double v1, v2;
        GetDoubles(v1,v2);
        Lbl_result->Caption = FloatToStr(v1 / v2);        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Btn_powClick(TObject *Sender)
{
        double v1, v2;
        GetDoubles(v1,v2);
        Lbl_result->Caption = FloatToStr(pow(v1 , v2));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OnKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        switch(Key) {
                case VK_F1:
                        this->Btn_addClick(NULL);
                        break;
                case VK_F2:
                        this->Btn_changeClick(NULL);
                        break;
                case VK_F3:
                        this->Btn_subClick(NULL);
                        break;
                case VK_F4:
                        this->Btn_multClick(NULL);
                        break;
                case VK_F5:
                        this->Btn_devideClick(NULL);
                        break;
                case VK_F6:
                        this->Btn_powClick(NULL);
                        break;
        }
}
//---------------------------------------------------------------------------
