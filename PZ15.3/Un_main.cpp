//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Un_main.h"
#include "Un_dialog.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

}

void TForm1::ReadFile()
{
    try {
        TStringList* list = new TStringList();
        list->LoadFromFile("PZ_15_03.rez");
        Memo_output->Lines = list;
    } catch(...) {
        Form2->ShowModal();
    }
}

void TForm1::WaitForButtonClick() {
        Button1->Visible = true;
        Memo_output->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OnEnter(TObject *Sender)
{
        static bool first = true;
        if(first) ReadFile();
        first = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        Button1->Visible = false;
        Memo_output->Visible = true;
        ReadFile();
}
//---------------------------------------------------------------------------
