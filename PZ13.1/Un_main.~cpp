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
        Resize(this);
}

void TForm1::Resize(TControl* c) {
        static bool a = false;
        double kx = 1920 / Screen->Width;
        double ky = 1080 / Screen->Height;
        if(!a)
           Font->Height /= ky;
        a = true;

}
//---------------------------------------------------------------------------
 