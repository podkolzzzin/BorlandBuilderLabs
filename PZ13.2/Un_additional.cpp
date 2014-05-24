//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Un_main.h"
#include "Un_additional.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
        Max_edit->Left = 0;
        Max_edit->Width = ClientWidth;
        Resize(Max_edit);
}

void TForm2::Resize(TControl* cnt) {
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
void __fastcall TForm2::Button1Click(TObject *Sender)
{
     Form1->Count(Max_edit->Text);
}
//---------------------------------------------------------------------------

