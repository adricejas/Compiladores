//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "Errores.h"
#include "dstring.h"
#include "TablaSimbolos.h"
#include "Tokens.h"
#include "AcercaDe.h"
#include "Lexico.h"
#include "Sentencias.h"
#include "Gramat.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TFormPrincipal *FormPrincipal;
//---------------------------------------------------------------------------
__fastcall TFormPrincipal::TFormPrincipal(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TFormPrincipal::Abrir1Click(TObject *Sender)
{
        AbrirFuente->Execute();

}
//---------------------------------------------------------------------------

void __fastcall TFormPrincipal::ErroresClick(TObject *Sender)
{
        if(Errores->Checked == true){
          FormErrores->Visible=true;
        }
        else {
             FormErrores->Visible=false;
        }
}
//---------------------------------------------------------------------------


void __fastcall TFormPrincipal::AbrirFuenteCanClose(TObject *Sender,
      bool &CanClose)
{
        Ejecutar->Enabled = true;

        FormErrores->ListBoxErrores->Clear();
        FormTokens->ListBoxTokens->Clear();
        FormTablaSimbolos->ListBoxTablaSimbolos->Clear();
        FormSentencias->ListBoxSentencias->Clear();
        fuente = AbrirFuente->FileName;
        archivo = fopen(fuente.c_str(),"r");
        Memo->Clear();
        char ch;
        AnsiString linea;
        int nroLinea = 1;
        do {
             ch = fgetc(archivo);
             if ((ch == '\n') || (ch == EOF)) {
                if ((nroLinea >= 0) && (nroLinea <= 9))
                 Memo->Lines->Add("0"+IntToStr(nroLinea)+": "+linea);
                else
                 Memo->Lines->Add(IntToStr(nroLinea)+": "+linea);
                nroLinea++;
                linea = "";
             }
             else
                 linea = linea + ch;
        } while (ch != EOF);
        fclose(archivo);
}
//---------------------------------------------------------------------------

void __fastcall TFormPrincipal::SalirClick(TObject *Sender)
{
        this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TFormPrincipal::EjecutarClick(TObject *Sender)
{
        FormErrores->ListBoxErrores->Clear();
        FormTokens->ListBoxTokens->Clear();
        FormTablaSimbolos->ListBoxTablaSimbolos->Clear();
        archivo = fopen(fuente.c_str(),"r");
        inicializar();
        yyparse();
        fclose(archivo);
        FormErrores->Visible=true;
        FormTokens->Visible=true;
        FormTablaSimbolos->Visible=true;
        FormSentencias->Visible=true;
        Errores->Checked = true;

}
//---------------------------------------------------------------------------

void __fastcall TFormPrincipal::TokensClick(TObject *Sender)
{
        if(Tokens->Checked == true){
          FormTokens->Visible=true;
        }
        else {
              FormTokens->Visible=false;
        }
}
//---------------------------------------------------------------------------

void __fastcall TFormPrincipal::TablaSimbolosClick(TObject *Sender)
{
      if (TablaSimbolos->Checked == true){
        FormTablaSimbolos->Visible=true;
      }
        else {
                FormTablaSimbolos->Visible=false;
        }
}
//---------------------------------------------------------------------------

void __fastcall TFormPrincipal::CerrarClick(TObject *Sender)
{
        FormErrores->ListBoxErrores->Clear();
        FormTokens->ListBoxTokens->Clear();
        FormTablaSimbolos->ListBoxTablaSimbolos->Clear();
        Memo->Clear();
        Ejecutar->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TFormPrincipal::AcercadeClick(TObject *Sender)
{
  FormAcercaDe->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TFormPrincipal::Sentencias1Click(TObject *Sender)
{
 FormSentencias->Visible = true;
}
//---------------------------------------------------------------------------

