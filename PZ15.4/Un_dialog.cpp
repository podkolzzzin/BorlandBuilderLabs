//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Un_dialog.h"
#include "Un_main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
        bool ex = false;
        try
        {
                Form1->ReadFile();
        }
        catch(...)
        {
            ex = true;
        }

        if(!ex)
        {
                 this->Close();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
        Form1->WaitForButtonClick();
        this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
        Form1->Close();
}
