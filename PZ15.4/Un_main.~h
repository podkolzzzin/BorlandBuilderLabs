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
        void __fastcall OnEnter(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
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
