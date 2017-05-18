%{

#include "TablaSimbolos.h"
#include "Lexico.h"

%}

%token IF
%token ENDIF
%token PRINT
%token INTEGER
%token ULONGINT
%token MATRIX
%token WHILE
%token ELSE
%token MAYORIGUAL
%token MENORIGUAL
%token IGUAL
%token DISTINTO
%token ASIGNACION
%token CARACTER
%token ID
%token DECREMENTO
%token ALLOW
%token TO
%token ANOTACION


%left '+' '-'
%left '*' '/'
%start main

%%

main: sentencia
	  | error {informarError("Existen errores en el programa principal");}              
      ;
		
sentencia: 	  sent sentencia
			| sent {informarError("debug:sent");}	
         ;

sent: iteracion
	| seleccion
    | asignacion
    | salida   {informarError("debug:salida");}	
	| error ';' {informarError("Sentencia no valida");}
    ;
	
declaraciones : declaracion declaraciones
              | declaracion	{informarError("debug:declaracion");}
			  | error { informarError("Declaracion incorrecta"); }			  
              ;

declaracion:   tipo variables ';' { agregarEstructura("Declaraci�n");}
			 | tipo variables error {informarError("Se esperaba un ';' en la declaraci�n"); }
			 | conversion ';'
			 | tipo arreglo ';'             
			 | tipo error {informarError("Falta identificador"); }
			 ;	

conversion:    ALLOW INTEGER TO ULONGINT {agregarEstructura("Conversi�n impl�cita");}
			 | ALLOW ULONGINT TO INTEGER {agregarEstructura("Conversi�n impl�cita");}
			 ;

arreglo: MATRIX ID '['INTEGER']''['INTEGER']' ANOTACION {agregarEstructura("Declaraci�n de arreglo");}
		;
			 
tipo: 	  INTEGER  {informarError("debug:integer");}       
		| ULONGINT 
		;
		 
variables: 	variables ',' var
			| var {informarError("debug:var");}
			| variables ',' error {informarError("Falta identificador despues de ,"); }
			;

var: ID 
     ;
	 
iteracion:  WHILE '(' condicion ')' bloque {agregarEstructura("Sentencia WHILE");}
	          ;

else:  ELSE { agregarEstructura("Sentencia ELSE");} sent
	 | ELSE { agregarEstructura("Sentencia ELSE");} '{' sentencia '}'
     | error { informarError("Sentencia ELSE incorrecta");}
	 |
     ;
	 
seleccion:   IF '(' condicion ')' { agregarEstructura("Sentencia IF");} bloque else ENDIF           		   
           | IF error { informarError("Sentencia IF incorrecta"); }
           ;
		   
condicion: 	  expresion MAYORIGUAL expresion { agregarEstructura("Condici�n '>='"); }
			| expresion MENORIGUAL expresion { agregarEstructura("Condici�n '<='"); }
			| expresion IGUAL expresion { agregarEstructura("Condici�n '='"); }
			| expresion DISTINTO expresion { agregarEstructura("Condici�n '<>'"); }
			| expresion '>' expresion { agregarEstructura("Condici�n '>'"); }
			| expresion '<' expresion { agregarEstructura("Condici�n '<'"); }
			;

expresion: 	  expresion '+' termino { $$ = $1 + $3; }
			| expresion '-' termino { $$ = $1 - $3; }
			| termino {$$ = $1;}
			;
	 
termino:  termino '*' factor { $$ = $1 * $3; }
		| termino '/' factor { $$ = $1 / $3; }
		| factor {$$ = $1;}
       ;

factor:   ID {$$ = $1;}
		| ID DECREMENTO {$$ = $1;}
		| ULONGINT { double valor = StrToFloat(tablaSimbolos[$1]);
					 if(valor < 0 || valor > 4294967295){
						informarError("Constante Entero Largo sin signo '"+tablaSimbolos[$1]+"' fuera de rango");
						AnsiString buffer = tablaSimbolos[$1];
						BajaTablaSimbolos(&buffer);
					}
				}
		|INTEGER { 	double valor = StrToFloat(tablaSimbolos[$1]);
					if(valor < -32768 || valor > 32767){
						informarError("Constante entera  '"+tablaSimbolos[$1]+"' fuera de rango");
						AnsiString buffer = tablaSimbolos[$1];
						BajaTablaSimbolos(&buffer);
					}		
				}		
		| '(' expresion ')' { $$ = $2;}
		| '(' expresion error { $$ = $2; informarError("Se esperaba un ')' en la expresion"); }
		;
	  
asignacion:  ID ASIGNACION expresion ';' { agregarEstructura("Asignaci�n al identificador '"+tablaSimbolos[$1]+"'"); }
            |ID ASIGNACION expresion error { $$ = $4; informarError("Se esperaba un ';' despues de la asignaci�n"); }
            |ID ASIGNACION error { informarError("Se esperaba una expresi�n despu�s de la asignaci�n"); }
            |ID error { informarError("Se esperaba un ':=' despues del identificador '"+tablaSimbolos[$1]+"'"); }
            ;

salida:    PRINT '(' CARACTER ')'';' { agregarEstructura("Emisi�n de mensaje por pantalla"); 
										informarError("debug:print");}			
           ;

%%


