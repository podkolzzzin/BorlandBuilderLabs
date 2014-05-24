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
        Max_edit->Left = 0;
        Max_edit->Width = ClientWidth;
        Resize(Max_edit);
        Resize(GroupBox1);
        Resize(Lbl_output);
        Resize(CheckBox1);
        Resize(CheckBox2);
        Resize(this);
}

void TForm1::Resize(TControl* cnt) {
        static bool a = false;
        double kx = 1920.0 / Screen->Width;
        double ky = 1200.0 / Screen->Height;
        if(!a)
           Font->Height /= ky;

        cnt->Width /= kx;
        cnt->Height /= ky;
        cnt->Left /= kx;
        cnt->Top /= ky;
        a = true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
        if(CheckBox1->Checked)
                Lbl_output->Font->Style = Lbl_output->Font->Style<<fsBold;
        else
                Lbl_output->Font->Style = Lbl_output->Font->Style>>fsBold;
}

//---------------------------------------------------------------------------
void __fastcall TForm1::CheckBox2Click(TObject *Sender)
{
        if(CheckBox1->Checked)
                Lbl_output->Font->Style = Lbl_output->Font->Style<<fsItalic;
        else
                Lbl_output->Font->Style = Lbl_output->Font->Style>>fsItalic;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Btn_setClick(TObject *Sender)
{
        Lbl_output->Caption = Max_edit->Text;
}
//---------------------------------------------------------------------------
