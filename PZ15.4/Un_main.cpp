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
        list->LoadFromFile("PZ_15_04.txt");
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
void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
        if(CheckBox1->Checked)
                Memo_output->Font->Style = Memo_output->Font->Style<<fsBold;
        else
                Memo_output->Font->Style = Memo_output->Font->Style>>fsBold;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox2Click(TObject *Sender)
{
        if(CheckBox2->Checked)
                Memo_output->Font->Style = Memo_output->Font->Style<<fsItalic;
        else
                Memo_output->Font->Style = Memo_output->Font->Style>>fsItalic;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OnCahnge(TObject *Sender)
{
        AnsiString v = "";
        int s = Edit1->SelStart;
        for(int i=1;i<=Edit1->Text.Length();i++)
        {
                char c = Edit1->Text[i];
                bool valid = (c>='0' && c<='9');
                if(valid)
                     v+=c;
                else if(i<s)
                        s--;
        }
        Edit1->Text = v;
        Edit1->SelStart = s;

        Memo_output->Font->Size = StrToInt(Edit1->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
        Memo_output->Lines->SaveToFile("PZ_15_04.rez");        
}
//---------------------------------------------------------------------------

