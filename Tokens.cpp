//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Tokens.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormTokens *FormTokens;
//---------------------------------------------------------------------------
__fastcall TFormTokens::TFormTokens(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormTokens::FormClose(TObject *Sender,
      TCloseAction &Action)
{
        FormPrincipal->Tokens->Checked = false;
}
//---------------------------------------------------------------------------

