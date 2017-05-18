//---------------------------------------------------------------------------

#ifndef ErroresH
#define ErroresH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TFormErrores : public TForm
{
__published:	// IDE-managed Components
        TListBox *ListBoxErrores;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall TFormErrores(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormErrores *FormErrores;
//---------------------------------------------------------------------------
#endif
