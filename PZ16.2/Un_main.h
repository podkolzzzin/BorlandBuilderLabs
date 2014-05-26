//---------------------------------------------------------------------------

#ifndef Un_mainH
#define Un_mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TStringGrid *StringGrid1;
        TButton *Button1;
        TButton *Btn_addCol;
        TButton *Btn_addRow;
        TButton *Btn_removeCol;
        TButton *Btn_removeRow;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Btn_addColClick(TObject *Sender);
        void __fastcall Btn_addRowClick(TObject *Sender);
        void __fastcall Btn_removeColClick(TObject *Sender);
        void __fastcall Btn_removeRowClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        void Resize(TControl* cnt);
        void Validate();
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
