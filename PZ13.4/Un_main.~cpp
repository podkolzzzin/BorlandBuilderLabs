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
        Edit_max->Left = 0;
        Edit_max->Width = ClientWidth;
        Resize(Edit_max);
        Resize(Lbl_output);
        Resize(Lbl_words);
        Resize(Btn_count);
        Resize(this);
}
//---------------------------------------------------------------------------

void TForm1::Resize(TControl* cnt)
{
        static bool fontResized = false;

        double kx = 1920.0 / Screen->Width;
        double ky = 1200.0 / Screen->Height;

        if(!fontResized)
           Font->Height /= ky;

        fontResized = true;

        cnt->Width /= kx;
        cnt->Height /= ky;
        cnt->Top /=ky;
        cnt->Left /= kx;
}

void __fastcall TForm1::Btn_countClick(TObject *Sender)
{
        int count = 0;
        bool inWord = true;
        for(int i=1;i<=Edit_max->Text.Length();i++)
        {
                if(Edit_max->Text[i]==' ' || Edit_max->Text[i]=='.' ||
                        Edit_max->Text[i]=='?' || Edit_max->Text[i]==',' ||
                        Edit_max->Text[i]==';')  {
                                if(inWord)
                                        count++;
                                inWord = false;
                        }
                else
                        inWord = true;

        }
        if(inWord) count++;
        Lbl_output->Caption = IntToStr(count);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OnEditChange(TObject *Sender)
{
        AnsiString v = "";
        int s = Edit_max->SelStart;
        for(int i=1;i<=Edit_max->Text.Length();i++)
        {
                char c = Edit_max->Text[i];
                bool valid = (c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='à' && c<='ÿ') || (c>='0' && c<='9')
                        || c==',' || c=='.' || c==';' || c=='!' || c=='?';
                if(valid)
                     v+=c;
                else if(i<s)
                        s--;
        }
        Edit_max->Text = v;
        Edit_max->SelStart = s;

}
//---------------------------------------------------------------------------

