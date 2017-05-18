//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TablaSimbolos.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormTablaSimbolos *FormTablaSimbolos;
//---------------------------------------------------------------------------
__fastcall TFormTablaSimbolos::TFormTablaSimbolos(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TFormTablaSimbolos::FormClose(TObject *Sender,
      TCloseAction &Action)
{
        FormPrincipal->TablaSimbolos->Checked = false;
}
//---------------------------------------------------------------------------

