//---------------------------------------------------------------------------

#ifndef TokensH
#define TokensH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TFormTokens : public TForm
{
__published:	// IDE-managed Components
        TListBox *ListBoxTokens;
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
        __fastcall TFormTokens(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormTokens *FormTokens;
//---------------------------------------------------------------------------
#endif
