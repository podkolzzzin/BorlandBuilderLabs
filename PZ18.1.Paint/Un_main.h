//---------------------------------------------------------------------------

#ifndef Un_mainH
#define Un_mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TComboBox *ComboBox1;
        TLabel *Label1;
        TColorBox *ColorBox1;
        TLabeledEdit *LabeledEdit1;
        void __fastcall OnMouseDown1(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        void __fastcall DrawShape(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y);
        TPoint start, end;
        TPoint arc3;
        int currentArcPoint;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
