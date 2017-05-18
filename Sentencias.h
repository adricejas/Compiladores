//---------------------------------------------------------------------------

#ifndef SentenciasH
#define SentenciasH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TFormSentencias : public TForm
{
__published:	// IDE-managed Components
        TListBox *ListBoxSentencias;
private:	// User declarations
public:		// User declarations
        __fastcall TFormSentencias(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormSentencias *FormSentencias;
//---------------------------------------------------------------------------
#endif
