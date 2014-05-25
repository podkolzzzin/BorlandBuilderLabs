//---------------------------------------------------------------------------

#ifndef Un_mainH
#define Un_mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMemo *Memo_output;
        TButton *Button1;
        TButton *Button2;
        TCheckBox *CheckBox1;
        TCheckBox *CheckBox2;
        TEdit *Edit1;
        TLabel *Label1;
        void __fastcall OnEnter(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall CheckBox2Click(TObject *Sender);
        void __fastcall OnCahnge(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
private:	// User declarations

public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        void ReadFile();
        void WaitForButtonClick();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
