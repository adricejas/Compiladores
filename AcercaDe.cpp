//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AcercaDe.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormAcercaDe *FormAcercaDe;
//---------------------------------------------------------------------------
__fastcall TFormAcercaDe::TFormAcercaDe(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormAcercaDe::AceptarClick(TObject *Sender)
{
  this->Visible = false;
}
//---------------------------------------------------------------------------

