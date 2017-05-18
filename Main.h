//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
#include <ComCtrls.hpp>
#include <ToolWin.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TFormPrincipal : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu;
        TMenuItem *Archivo;
        TMenuItem *Abrir1;
        TMenuItem *Ver;
        TMenuItem *Errores;
        TMenuItem *Tokens;
        TMenuItem *TablaSimbolos;
        TMenuItem *Acercade;
        TOpenDialog *AbrirFuente;
        TMenuItem *Ejecutar;
        TMenuItem *Salir;
        TMemo *Memo;
        TMenuItem *Sentencias1;
        void __fastcall Abrir1Click(TObject *Sender);
        void __fastcall ErroresClick(TObject *Sender);
        void __fastcall AbrirFuenteCanClose(TObject *Sender,
          bool &CanClose);
        void __fastcall SalirClick(TObject *Sender);
        void __fastcall EjecutarClick(TObject *Sender);
        void __fastcall TokensClick(TObject *Sender);
        void __fastcall TablaSimbolosClick(TObject *Sender);
        void __fastcall CerrarClick(TObject *Sender);
        void __fastcall AcercadeClick(TObject *Sender);
        void __fastcall Sentencias1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFormPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormPrincipal *FormPrincipal;
//---------------------------------------------------------------------------
#endif
