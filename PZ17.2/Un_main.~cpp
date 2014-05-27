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
        Resize(LabeledEdit1);
        Resize(Button1);
        Resize(this);
}

void TForm1::Resize(TControl* cnt)
{
        static bool first = true;

        double kx = 1920.0 / Screen->Width;
        double ky = 1200.0 / Screen->Height;

        if(first)
                Font->Height *= ky;

        cnt->Left /= kx;
        cnt->Top /= ky;
        cnt->Width /= kx;
        cnt->Height /= ky;
        first = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
     try
     {
        numLabels = StrToInt(LabeledEdit1->Text);
        if(numLabels<1 || numLabels>20)
                throw "Что-то пошло не так";
        for(int i=0;i<numLabels;i++) {
                TLabel* lbl = new TLabel(this);
                lbl->Parent = this;

                lbl->Top = (i / 5) * 105 + Button1->Top + Button1->Height + 5;
                lbl->Left = (i%5) * 105;
                lbl->AutoSize = false;
                lbl->Width = 100;
                lbl->Height = 100;


                lbl->Color = clRed;
                if(i%2==0)
                {
                        lbl->ParentFont = false;
                        lbl->Font->Size = 12;
                        lbl->Font->Name = "Times New Roman";
                }

                lbls[i] = lbl; //Save to array
        }
        this->Width = (numLabels > 5) ? 5 * 110 : numLabels * 110;
        int k = numLabels / 5 + 1 + ((numLabels % 5 > 0) ? 1 : 0);
        this->Height = k * 105 + Button1->Top;
        LabeledEdit1->Enabled = false;

        ShowLabelText(Sender);
     }
     catch(...)
     {
                ShowMessage("Что-то пошло не так!");
     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::HideLabelText(TObject *Sender) {
    for(int i=0;i<numLabels;i++)
    {
        lbls[i]->Caption = "";
    }
    Button1->OnClick = this->ShowLabelText;
    Button1->Caption = "Показать";
}

void __fastcall TForm1::ShowLabelText(TObject *Sender) {
    for(int i=0;i<numLabels;i++)
    {
        lbls[i]->Caption = IntToStr(i + 1);
    }
    Button1->OnClick = this->HideLabelText;
    Button1->Caption = "Скрыть";
}

