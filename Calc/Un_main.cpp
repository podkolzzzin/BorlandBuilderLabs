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
        operation = '`';
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NumberClick(TObject *Sender)
{
        if(operation=='`')
        {
               this->left += ((TButton*)Sender)->Caption;
                       Edit1->Text = this->left;
        }
        else {
                this->right +=((TButton*)Sender)->Caption;
                Edit1->Text = this->right;

        }




}
//---------------------------------------------------------------------------
void __fastcall TForm1::OperationClick(TObject *Sender)
{
        Edit1->Text = "";
        if(operation == '`')
                operation = ((TButton*)Sender)->Caption[1];
        else
        {
                operation = ((TButton*)Sender)->Caption[1];
                Count();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClearClick(TObject *Sender)
{
        if(operation=='`')
        {
                left = "";
        }
        else right ="";
        Edit1->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        operation = '`';
        Edit1->Text = left = right = "";
}
//---------------------------------------------------------------------------
void TForm1::Count() {
        double  left = StrToFloat(this->left);
        double right = StrToFloat(this->right);
        double result;
        switch(operation)
        {
                case '+':
                        result = left + right;
                        break;
                case '-':
                        result = left - right;
                        break;
                case '*':
                        result = left * right;
                        break;
                case '/':
                        if(right!=0)
                                result = left / right;
                        else
                                ShowMessage("На ноль делить нельзя");
                        break;

        }
        Edit1->Text = FloatToStr(result);
        this->left = Edit1->Text;
        this->right = "";
}
void __fastcall TForm1::Button14Click(TObject *Sender)
{
        if(operation!='`')
        {
                Count();
                left = Edit1->Text;
                right = "";
                operation = '`';
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button13Click(TObject *Sender)
{
        AnsiString* current = (operation=='`')?&left:&right;
        if(!current->Pos(","))
                (*current)+=",";
        Edit1->Text = *current;

}
//---------------------------------------------------------------------------
