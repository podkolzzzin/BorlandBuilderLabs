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
        currentArcPoint = 0;
}

//---------------------------------------------------------------------------
void __fastcall TForm1::DrawShape(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        end = Point(X,Y);
        this->Canvas->Brush->Color = ColorBox1->Selected;
        this->Canvas->Pen->Color = ColorBox1->Selected;
        try {
        this->Canvas->Pen->Width = StrToInt(LabeledEdit1->Text);
        } catch(...) {}

        ComboBox1->Enabled = true;
        switch(ComboBox1->ItemIndex)
        {
                case 0:
                        this->Canvas->MoveTo(start.x,start.y);
                        this->Canvas->LineTo(end.x, end.y);
                        break;
                case 1:
                        this->Canvas->Rectangle(start.x, start.y, end.x, end.y);
                        break;
                case 2:
                        this->Canvas->Ellipse(start.x, start.y, end.x, end.y);
                        break;
                case 3:
                        ComboBox1->Enabled = false;
                        currentArcPoint++;
                        if(currentArcPoint==1)  currentArcPoint = 3;
                        else if(currentArcPoint==3) arc3 = Point(X,Y);
                        else
                        {
                                this->Canvas->Arc(start.x, start.y, end.x, end.y, arc3.x, arc3.y, X, Y);
                                currentArcPoint = 0;
                                ComboBox1->Enabled = true;
                        }
                        break;
        }

        OnMouseDown = OnMouseDown1;
}
void __fastcall TForm1::OnMouseDown1(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
        start = Point(X,Y);
        this->ComboBox1->Enabled = false;
        OnMouseDown = DrawShape;
}
//---------------------------------------------------------------------------

