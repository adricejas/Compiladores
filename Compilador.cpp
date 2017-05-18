//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Main.cpp", FormPrincipal);
USEFORM("Errores.cpp", FormErrores);
USEFORM("Tokens.cpp", FormTokens);
USEFORM("TablaSimbolos.cpp", FormTablaSimbolos);
USEFORM("AcercaDe.cpp", FormAcercaDe);
USEFORM("Sentencias.cpp", FormSentencias);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TFormPrincipal), &FormPrincipal);
                 Application->CreateForm(__classid(TFormErrores), &FormErrores);
                 Application->CreateForm(__classid(TFormTokens), &FormTokens);
                 Application->CreateForm(__classid(TFormTablaSimbolos), &FormTablaSimbolos);
                 Application->CreateForm(__classid(TFormAcercaDe), &FormAcercaDe);
                 Application->CreateForm(__classid(TFormSentencias), &FormSentencias);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
