//---------------------------------------------------------------------------

#ifndef TablaSimbolosH
#define TablaSimbolosH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TFormTablaSimbolos : public TForm
{
__published:	// IDE-managed Components
        TListBox *ListBoxTablaSimbolos;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall TFormTablaSimbolos(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormTablaSimbolos *FormTablaSimbolos;
//---------------------------------------------------------------------------
#endif
