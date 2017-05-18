//---------------------------------------------------------------------------

#ifndef AcercaDeH
#define AcercaDeH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TFormAcercaDe : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *Integrantes;
        TButton *Aceptar;
        TLabel *Label1;
        TGroupBox *NroGrupo;
        TLabel *LabelNumero;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        void __fastcall AceptarClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFormAcercaDe(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormAcercaDe *FormAcercaDe;
//---------------------------------------------------------------------------
#endif
