//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Errores.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormErrores *FormErrores;
//---------------------------------------------------------------------------
__fastcall TFormErrores::TFormErrores(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormErrores::FormClose(TObject *Sender,
      TCloseAction &Action)
{
        FormPrincipal->Errores->Checked = false;
}
//---------------------------------------------------------------------------

