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
        TEdit *Edit1;
        TEdit *Edit2;
        TButton *Btn_change;
        TButton *Btn_add;
        TButton *Btn_sub;
        TButton *Btn_mult;
        TButton *Btn_devide;
        TButton *Btn_pow;
        TLabel *Label1;
        TLabel *Lbl_result;
        void __fastcall Btn_changeClick(TObject *Sender);
        void __fastcall Btn_addClick(TObject *Sender);
        void __fastcall Btn_subClick(TObject *Sender);
        void __fastcall Btn_multClick(TObject *Sender);
        void __fastcall Btn_devideClick(TObject *Sender);
        void __fastcall Btn_powClick(TObject *Sender);
        void __fastcall OnKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
private:	// User declarations
        void GetDoubles(double& v1, double& v2);
        void Resize(TControl* c, double k, double kx, double ky);
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
