#ifndef _LEXICO_H
#define _LEXICO_H
#endif
#include <stdio.h>
#define ESTADOFINAL 19

extern const estados = 19;
extern const eventos = 29;

extern AnsiString fuente;
extern FILE *archivo;

extern int cantlineas;
extern AnsiString palReservadas[];

extern DynamicArray<AnsiString> tablaSimbolos;
extern int nuevoestado[estados][eventos];
extern int (*proceso[estados][eventos])(char,AnsiString *);
extern int lexico();
extern void inicializar();
extern void informarError(AnsiString error);
extern void agregarEstructura(AnsiString estructura);
extern int AltaTablaSimbolos(AnsiString *buffer, char type);
extern int BajaTablaSimbolos(AnsiString *buffer, char type);
extern int buscarLexema(AnsiString *buffer);
