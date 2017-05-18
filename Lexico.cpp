#include <conio.h>
#include <system.hpp>
#include <stdio.h>
#include <math.h>

#include "Tokens.h"
#include "arbolABB.h"
#include "Errores.h"
#include "TablaSimbolos.h"
#include "Sentencias.h"
#include "Gramat.h"


#define ESTADOFINAL 20
const estados = 20;
const eventos = 29;

//Procedimientos que invoca la matriz de procesos.
int incLineas(char caracter, AnsiString *buffer);
int inicBuf(char caracter, AnsiString *buffer);
int nada(char caracter, AnsiString *buffer);
int addSimb(char caracter, AnsiString *buffer);
int llave(char caracter, AnsiString *buffer);
int corchete(char caracter, AnsiString *buffer);
int parent(char caracter, AnsiString *buffer);
int opArit(char caracter, AnsiString *buffer);
int opAritDiv(char caracter, AnsiString *buffer);
int coma(char caracter, AnsiString *buffer);
int ptoComa(char caracter, AnsiString *buffer);
int opLogComp(char caracter, AnsiString *buffer);
int opAsig(char caracter, AnsiString *buffer);
int opAritResta(char caracter, AnsiString *buffer);
int opLogSimp(char caracter, AnsiString *buffer);
int opLogIgual(char caracter, AnsiString *buffer);
int opLogDec(char caracter, AnsiString *buffer);
int finId(char caracter, AnsiString *buffer);
int finCte(char caracter, AnsiString *buffer);
int unget(char caracter,  AnsiString *buffer);
int finCadena(char caracter, AnsiString *buffer);
int anotacion(char caracter, AnsiString *buffer);
int error1(char caracter, AnsiString *buffer);
int error2(char caracter, AnsiString *buffer);
int error3(char caracter, AnsiString *buffer);
int error4(char caracter, AnsiString *buffer);
int error5(char caracter, AnsiString *buffer);
int error6(char caracter, AnsiString *buffer);
void inicializar();


//Funciones adicionales.
int lexico();
int getEntrada(char ch, int estado);
int esPalabraReservada(AnsiString *buffer);
int AltaTablaSimbolos(AnsiString *buffer, char type);
int BajaTablaSimbolos(AnsiString *buffer, char type);
int tokenPalRes(AnsiString *buffer);
int buscarLexema(AnsiString *buffer);

int yylex();
void yyerror(const char *){}
void informarError(AnsiString error);
void agregarEstructura(AnsiString estructura);

//Definicion de tipos y variables.


DynamicArray<AnsiString> tablaSimbolos;
Arbol ArbolInt=NULL;
AnsiString fuente;
FILE *archivo;
int cantlineas;
AnsiString palReservadas[] = {"if","else","endif","print","integer","ulongint","matrix", "while", "allow", "to"};

int nuevoEstado[estados][eventos] = {
                                  //0	1	2	3	4	5	6 	7	8	9	10	11	12	13	14	15	16	17	18	19	20	21	22	23	24	25	26	27	28 
									1,	0,	20,	15,	5,	0,	20,	20,	13,	14,	20,	12,	20,	20,	20,	20,	0,	0,	2, 	16, 0, 	8,	1 ,	1,	1,	1,	1,	20,	20,//0
									1,	1,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	1,	20,	20,	20,	1,	1,	1,	1,	1,	20,	20,//1
									19,	19,	19,	19,	19,	19,	19,	19,	19,	19,	19,	19,	19,	19,	19,	19,	19,	19,	19,	19,	19,	19,	4,	3,	19,	19,	19,	19,	19,//2				     
									20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	4,	20,	20,	20,	20,//3
									20,	18,	20,	17,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,	20,//4																					
									5,	5,	6,	5,	20,	20,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	20,//5
									7,	7,	6,	7,	20,	5,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	7,	20,//6
									5,	5,	6,	5,	20,	7,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5,	5, //7					 
									8,	8 , 8,  8,  8,  0,  8,	8,	8,	8,	8,	8,	8,	8,	8,	8,	8,	8,	8,	8,	8, 	9, 	8, 	8,	8,	8, 	8,	8,	8,//8
									9,	9 ,	9,	9,	9,	0,	9,	9,	9,	9,	9,	9,	9,	9,	9,	9,	9,	9,	9,	9,	10,	9,	9,	9,	9,	9,	9,	9,	9, //9																								
									9,	9,	9,	9,	9,	0,	9,	9,	9,	9,	9,	9,	9,	9,	9,	9,	9,	9,	9,	9,	9,	9,	9,	9,	9,	11,	11,	9,	9, //10																				
									11,	11, 11, 11, 11, 20,  11, 11, 11, 11, 11, 11, 11, 11 ,11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11,//11																				
									20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,//12
									20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,//13
									20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,//14
									20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,//15
									20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,//16
									20, 18, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,//17
									20, 18, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20,//18									
									19, 19, 19, 19, 19, 0, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19,//19
					 };

int (*proceso[estados][eventos])(char,AnsiString *)={
               /*   0(letra)    	1(digito)   	2(+)        	3(-)        4(")        	5(\N)       	6(/)        	7(())       	8(<)        	9(>)         	10(=)      		11(:)       	12({})     		13(,)       	  14(;)     	 15(*)     		16(\t,b)  		17(simb.desc) 	18(_)     		19(!)      		20(@)      		21(&)      		22(i)      		23(u)     		24(l)      		25(F)      		26(C)       	27([])     		28(EOF)
            /*0*/   inicBuf,    	nada,  			opArit,     	addSimb,    inicBuf,    	incLineas,  	opAritDiv,  	parent,     	inicBuf,    	inicBuf,    	opLogIgual, 	inicBuf,   		llave,      	coma,       	ptoComa,    	opArit,    		nada,       	error1,    		nada,      		addSimb,   		nada,      		nada,      		nada,      		nada,      		nada,      		nada,    		nada,     		corchete,   	nada,      /*0*/
			/*1*/	addSimb,    	addSimb,  		finId,      	finId,      finId,      	finId,      	finId,      	finId,      	finId,      	finId,      	finId,      	finId,      	finId,      	finId,      	finId,      	finId,     		finId,      	finId,     		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,  	 	finId,     		finId,     /*1*/
			/*2*/	nada,      		nada,     		nada,       	nada,     	nada,       	nada,  	  		nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,      		nada,       	nada,      		nada,      		nada,      		nada,      		nada,      		addSimb,      	addSimb,      	nada,      		nada,      		nada,     	 	nada,      		nada,	   /*2*/
			/*3*/	nada,       	nada,     		nada,       	nada,       nada,       	nada,  	  		nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,      		nada,       	nada,      		nada,      		nada,      		nada,      		nada,      		nada,      		nada,      		addSimb,      	nada,      		nada,     	 	nada,      		nada,	   /*3*/																																																																																		
			/*4*/	nada,  			addSimb,		nada,  			addSimb,  	nada,  			nada,  			nada,	  		nada,  			nada,  			nada,  			nada,  			nada,  			nada,  			nada,  			nada,  			nada, 			nada,  			nada, 			nada, 			nada, 			nada, 			nada,    		nada, 			nada, 			nada, 			nada, 			nada,	 		nada, 			nada,	   /*4*/																																					
			/*5*/	addSimb,    	addSimb,  		nada,       	addSimb,    finCadena,  	error4,     	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,   		addSimb,    	addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,  	 	addSimb,   		error3,    /*5*/
			/*6*/	addSimb,    	addSimb,  		nada,    		addSimb,    finCadena,    	incLineas,  	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,   		addSimb,    	addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,  	 	addSimb,   		nada,      /*6*/			
			/*7*/	addSimb,    	addSimb,  		nada,    		addSimb,    finCadena,    	incLineas,  	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,    	addSimb,   		addSimb,    	addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,   		addSimb,  	 	addSimb,   		nada,      /*7*/			
			/*8*/	nada,  			nada,			nada,  			nada,  		nada,  			error5,		  	nada,	  		nada,  			nada,  			nada,  			nada,  			nada,  			nada,  			nada,  			nada,  			nada, 			nada,  			nada, 			nada, 			nada, 			nada, 			nada,    		nada, 			nada, 			nada, 			nada, 			nada,	 		nada, 			nada,      /*8*/
			/*9*/	nada,       	nada,     		nada,       	nada,       nada,       	incLineas,  	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,      		nada,       	nada,      		nada,      		nada,      		nada,      		nada,      		nada,      		nada,      		nada,      		nada,      		nada,     	 	nada,      		nada,      /*9*/			
			/*10*/	nada,       	nada,     		nada,       	nada,       nada,       	incLineas,  	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,      		nada,       	nada,      		nada,      		nada,      		nada,      		nada,      		nada,      		nada,      		nada,      		nada,      		nada,     	 	nada,      		nada,      /*10*/			                                                                                                                                                                                                                                                                                                                      
			/*11*/  nada,  			nada,			nada,  			nada,  		nada,  			anotacion,  	nada,  			nada,  			nada,  			nada,  			nada,  			nada,  			nada,  			nada,  			nada,  			nada, 	    	nada,  			nada, 			nada, 			nada, 			nada, 			nada, 			nada, 			nada, 			nada, 			nada, 			nada,   		nada, 			nada, 	   /*11*/
			/*12*/	error2,     	error2,   		error2,     	error2,     error2,     	error2,     	error2,     	error2,     	error2,     	error2,     	opAsig, 		error2, 		error2,     	error2,     	error2,     	error2,    		error2,     	error2,    		error2,    		error2,    		error2,    		error2,    		error2,    		error2,    		error2,    		error2,    		error2,   	 	error2,    		error2,    /*12*/			
			/*13*/	opLogSimp,  	opLogSimp,		opLogSimp,  	opLogSimp,  opLogSimp,  	opLogSimp,  	opLogSimp,  	opLogSimp,  	opLogSimp,  	opLogSimp,  	opLogComp,  	opLogSimp,  	opLogSimp,  	opLogSimp,  	opLogSimp,  	opLogSimp, 		opLogSimp,  	opLogSimp, 		opLogSimp, 		opLogSimp, 		opLogSimp, 		opLogSimp, 		opLogSimp, 		opLogSimp, 		opLogSimp, 		opLogSimp, 		opLogSimp,	 	opLogSimp, 		nada,      /*13*/
			/*14*/	opLogSimp,  	opLogSimp,		opLogSimp,  	opLogSimp,  opLogSimp,  	opLogSimp,  	opLogSimp,  	opLogSimp,  	opLogSimp,  	opLogSimp,  	opLogComp,  	opLogSimp,  	opLogSimp,  	opLogSimp,  	opLogSimp,  	opLogSimp, 		opLogSimp,  	opLogSimp, 		opLogSimp, 		opLogSimp, 		opLogSimp, 		opLogSimp, 		opLogSimp, 		opLogSimp, 		opLogSimp, 		opLogSimp, 		opLogSimp,	 	opLogSimp, 		nada,      /*14*/
			/*15*/	opAritResta,	opAritResta,	opAritResta,	opLogDec, 	opAritResta,	opAritResta,	opAritResta,	opAritResta,  	opAritResta,  	opAritResta,  	opAritResta,	opAritResta,    opAritResta,    opAritResta,    opAritResta,  	opAritResta, 	opAritResta,  	opAritResta, 	opAritResta, 	opAritResta, 	opAritResta, 	opAritResta, 	opAritResta, 	opAritResta, 	opAritResta, 	opAritResta, 	opAritResta,	opAritResta,	nada,      /*15*/
			/*16*/	nada,  			nada,			nada,  			nada,  		nada,  			nada,  			nada,	  		nada,  			nada,  			nada,  			opLogComp,  	nada,  			nada,  			nada,  			nada,  			nada, 			nada,  			nada, 			nada, 			nada, 			nada, 			nada,    		nada, 			nada, 			nada, 			nada, 			nada,	 		nada,			nada,	   /*16*/																																					
			/*17*/	nada,  			addSimb,		nada,  			nada,  		nada,  			nada,  			nada,	  		nada,  			nada,  			nada,  			nada,  			nada,  			nada,  			nada,  			nada,  			nada, 			nada,  			nada, 			nada, 			nada, 			nada, 			nada,    		nada, 			nada, 			nada, 			nada, 			nada,	 		nada, 			nada,	   /*17*/																																					
			/*18*/	finCte,  		addSimb,		finCte,  		finCte,  	finCte,  		finCte,  		finCte,	  		finCte,  		finCte,  		finCte,  		finCte,  		finCte,  		finCte,  		finCte,  		finCte,  		finCte, 		finCte,  		finCte, 		finCte, 		finCte, 		finCte, 		finCte,    		finCte, 		finCte, 		finCte, 		finCte, 		finCte,	 		finCte, 		finCte,	   /*18*/																																									
			/*19*/	nada,       	nada,     		nada,       	nada,       nada,       	error6,  		nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,       	nada,      		nada,       	nada,      		nada,      		nada,      		nada,      		nada,      		nada,      		nada,      		nada,      		nada,      		nada,     	 	nada,      		nada,      /*19*/
};


//---------------------------------------------------------------------------
int yylex(){
        int evento, estado = 0, idToken;
        AnsiString *buffer = new AnsiString;
        char ch;
        do {
             ch = fgetc(archivo);
             evento = getEntrada(ch,estado);
             idToken = proceso[estado][evento](ch,buffer);
             estado = nuevoEstado[estado][evento];
        } while (estado != ESTADOFINAL);
        delete(buffer);
        return idToken;
}
int getEntrada(char ch, int estado){

        if (ch >= 'a' && ch <= 'z')
                if (ch != 'i' && ch != 'u' && ch != 'l')
                        return 0;
        if (ch >= 'A' && ch <= 'Z')
				if (ch != 'F' && ch != 'C')
					return 0;
        if (ch >= '0' && ch <= '9')
                return 1;
        switch (ch) {
		  case 'i': if (estado == 2) return 22;
					else	
						return 0;
		  case 'u': if (estado == 2) return 23;
					else	
						return 0;
		  case 'l': if (estado == 3) return 24;
					else	
						return 0;
		  case 'F': if (estado == 10) return 25;
					else	
                                          return 0;
		  case 'C': if (estado == 10) return 26;
					else	
						return 0;			
          case '+': return 2;
          case '-': return 3;
          case '"': return 4;
          case '\n': return 5;
          case '/': return 6;
          case '(': return 7;
          case ')': return 7;
          case '<': return 8;
          case '>': return 9;
          case '=': return 10;
          case ':': return 11;
          case '{': return 12;
          case '}': return 12;
          case '[': return 27;
          case ']': return 27;
          case ',': return 13;
          case ';': return 14;
          case '*': return 15;
          case ' ': return 16;
          case '\t': return 16;
          case '_': return 18;
		  case '!': return 19;
	      case '@': return 20;
          case '&': return 21;
          case EOF: return 28;

        }
   return 17;  //Símbolo desconocido
}

void inicializar(){
   tablaSimbolos.Length = 0;
   cantlineas = 1;
}

int esPalabraReservada(AnsiString *buffer){
        int existe = 0;
        for(int i=0; i<10 && !existe;i++)
          if (palReservadas[i]== *buffer) existe = 1;
        return existe;
}

int AltaTablaSimbolos(AnsiString *buffer, char type){
        int pos = buscarLexema(buffer);
        if(pos == -1) { //si no existe el lexema
          pos = tablaSimbolos.Length;
          tablaSimbolos.Length++;
          tablaSimbolos[pos]= *buffer;
          switch(type){
                case 'E':
                        FormTablaSimbolos->ListBoxTablaSimbolos->Items->Add("Constante: " + *buffer);
                        break;
                case 'C':
                        FormTablaSimbolos->ListBoxTablaSimbolos->Items->Add("Cadena: " + *buffer);
                        break;
                case 'I':
                        FormTablaSimbolos->ListBoxTablaSimbolos->Items->Add("Identificador: " + *buffer);
                        break;
          }
        }
        return pos;
}

int BajaTablaSimbolos(AnsiString *buffer, char type){
        int pos = buscarLexema(buffer);
		int posForm = -1;
        if(pos != -1) { //existe el lexema
          tablaSimbolos[pos]= NULL;
          pos = tablaSimbolos.Length -1;
          tablaSimbolos.Length--;
		  switch(type){
                case 'E':
                        posForm = FormTablaSimbolos->ListBoxTablaSimbolos->Items->IndexOf("Constante: " + *buffer);						
                        break;
                case 'C':
                        posForm = FormTablaSimbolos->ListBoxTablaSimbolos->Items->IndexOf("Cadena: " + *buffer);						
                        break;
                case 'I':
                        posForm = FormTablaSimbolos->ListBoxTablaSimbolos->Items->IndexOf("Identificador: " + *buffer);						
                        break;
		}        
		FormTablaSimbolos->ListBoxTablaSimbolos->Items->Delete(posForm);
        }
        return pos;
}

int buscarLexema(AnsiString *buffer){
        int pos;
        AnsiString *bufferAux = new AnsiString;
        int i = tablaSimbolos.Length;
        int pos1 = tablaSimbolos.Low;
        for(pos = tablaSimbolos.Low;pos < tablaSimbolos.Length ;pos++)
          if (tablaSimbolos[pos] == *buffer)
                return pos;
       return -1;
}
//------------------------------------------------------------------------------
void informarError(AnsiString error){
        FormErrores->ListBoxErrores->Items->Add("Linea "+IntToStr(cantlineas)+": "+error);
}

void agregarEstructura(AnsiString estructura){
        FormSentencias->ListBoxSentencias->Items->Add("Linea "+IntToStr(cantlineas)+" : "+estructura);
}

int tokenPalRes(AnsiString *buffer){
          if (*buffer == "if") return IF;
		  if (*buffer == "endif") return ENDIF;
          if (*buffer == "print") return PRINT;
		  if (*buffer == "integer") return INTG;
          if (*buffer == "ulongint") return ULONGINTG;
          if (*buffer == "matrix") return MATRIX;
          if (*buffer == "while") return WHILE;
		  if (*buffer == "allow") return ALLOW;
		  if (*buffer == "to") return TO;		  
          return ELSE; // "else"
}

int incLineas(char caracter, AnsiString *buffer){
        cantlineas++;
		return NULL;
}
//Iniciar Buffer
int inicBuf(char caracter, AnsiString *buffer){
        *buffer = caracter;
		return NULL;
}

//Unget
int unget(char caracter, AnsiString *buffer){
          ungetc(caracter,archivo);
		  return NULL;
}

//No se realiza ninguna accion
int nada(char caracter, AnsiString *buffer){
	return NULL;
}

//Agrega simbolo al buffer
int addSimb(char caracter, AnsiString *buffer){
        *buffer = *buffer + caracter;
		return NULL;
}

//Llaves
int llave(char caracter, AnsiString *buffer){
        inicBuf(caracter,buffer);
        FormTokens->ListBoxTokens->Items->Add("LLave "+*buffer);
		return caracter;
}

//Corchetes
int corchete(char caracter, AnsiString *buffer){
        inicBuf(caracter,buffer);
        FormTokens->ListBoxTokens->Items->Add("Corchete "+*buffer);
		return caracter;
}

//Parentesis
int parent(char caracter, AnsiString *buffer){
        inicBuf(caracter,buffer);
        FormTokens->ListBoxTokens->Items->Add("Parentesis "+*buffer);
		return caracter;
}

//Operador aritmetico + *
int opArit(char caracter, AnsiString *buffer){
        inicBuf(caracter,buffer);
        FormTokens->ListBoxTokens->Items->Add("Operador Aritmético "+*buffer);
		return caracter;
}

//Operador aritmetico -
int opAritResta(char caracter, AnsiString *buffer){
        FormTokens->ListBoxTokens->Items->Add("Operador Aritmético "+*buffer);
		return caracter;
}

//Operador aritmetico /
int opAritDiv(char caracter, AnsiString *buffer){
        FormTokens->ListBoxTokens->Items->Add("Operador Aritmético /");
		return caracter;
}

//Coma
int coma(char caracter, AnsiString *buffer){
        FormTokens->ListBoxTokens->Items->Add("Separador de variables ,");
		return caracter;
}

//Punto y Coma
int ptoComa(char caracter, AnsiString *buffer){
        FormTokens->ListBoxTokens->Items->Add("Separador de Sentencias ;");
		return caracter;
}


//Operador Lógico Compuesto >=, <= y !=
int opLogComp(char caracter, AnsiString *buffer){
        addSimb(caracter,buffer);
        FormTokens->ListBoxTokens->Items->Add("Operador Lógico "+*buffer);
		if (*buffer == ">=") return MAYORIGUAL;
        if (*buffer == "<=") return MENORIGUAL;
        if (*buffer == "=") return IGUAL;
        return DISTINTO;//"!="
}

//Operador Aritmético Decremento --
int opLogDec(char caracter, AnsiString *buffer){
        addSimb(caracter,buffer);
        FormTokens->ListBoxTokens->Items->Add("Operador Aritmético Decremento "+*buffer);
        return DECREMENTO;
}

//Operador Asignacion :=
int opAsig(char caracter, AnsiString *buffer){
     addSimb(caracter,buffer);
     FormTokens->ListBoxTokens->Items->Add("Asignacion " +*buffer);
	 return ASIGNACION;
}
//Operador Lógico Simple <, >
int opLogSimp(char caracter, AnsiString *buffer){
     FormTokens->ListBoxTokens->Items->Add("Operador Lógico "+*buffer);
     ungetc(caracter,archivo);
	 return (*buffer->c_str());
}

//Operador Lógico Igual =
int opLogIgual(char caracter, AnsiString *buffer){
     FormTokens->ListBoxTokens->Items->Add("Operador Lógico = ");
	 return IGUAL;
}

//Fin de una cadena de caracteres
int finCadena(char caracter, AnsiString *buffer){
     addSimb(caracter, buffer);
     FormTokens->ListBoxTokens->Items->Add("Cadena de caracteres multilínea");
     AltaTablaSimbolos(buffer, 'C');
	 return CARACTER;
}

//Fin Identificador, comprobacion de limite, si es palabra reservada y alta en tabla de simbolo en caso de no existir en ella.
int finId(char caracter, AnsiString *buffer){
        if(buffer->Length() > 20)
        {
            FormErrores->ListBoxErrores->Items->Add("Linea "+IntToStr(cantlineas)+" : Warning: Identificador '"+*buffer+"' fuera de límite");
            AnsiString identificadorTruncado = buffer->SubString(0,20);
            FormTokens->ListBoxTokens->Items->Add("Identificador "+ identificadorTruncado);
			yylval = AltaTablaSimbolos(&identificadorTruncado, 'I');
        }
        else
            if(esPalabraReservada(buffer)){
              FormTokens->ListBoxTokens->Items->Add("Palabra Reservada "+*buffer);
			  ungetc(caracter,archivo);
              return tokenPalRes(buffer);
			}
            else {
                FormTokens->ListBoxTokens->Items->Add("Identificador "+*buffer);
                yylval = AltaTablaSimbolos(buffer, 'I');
            }
        ungetc(caracter,archivo);
		return ID;
}

AnsiString obtener_int(AnsiString &buffer){
      AnsiString num = buffer;
      int length = buffer.Length();
      num = buffer.SubString(2,length);
      return num;
}

AnsiString obtener_ulong(AnsiString &buffer){
      AnsiString num = buffer;
      int length = buffer.Length();
      num = buffer.SubString(3,length);
      return num;
}

AnsiString obtener_tipo(AnsiString &buffer){
      AnsiString tipo = buffer;
      tipo = buffer.SubString(1,1);
      return tipo;
}

//Fin constante entera sin signo (uint y ulong) y alta en tabla de simbolo en caso de no existir en ella.
int finCte(char caracter, AnsiString *buffer){

        AnsiString tipo = obtener_tipo(*buffer);
        AnsiString *valor1 = new AnsiString;
		if (tipo=="u"){
			*valor1 = obtener_ulong(*buffer);
		}		
		else{
			*valor1 = obtener_int(*buffer);
		}
        
        yylval = AltaTablaSimbolos(valor1, 'E');
		ungetc(caracter,archivo);		
		
		if (tipo == "u"){
			return ULONGINT;
		}
		else
			return INTEGER;
}

int anotacion(char caracter, AnsiString *buffer){
	FormTokens->ListBoxTokens->Items->Add("Anotación para arreglos");
	ungetc(caracter,archivo);
	return ANOTACION;	
}


//Error en caso de que aparezca un simbolo desconocido.
int error1(char caracter, AnsiString *buffer){
        FormErrores->ListBoxErrores->Items->Add("Linea "+IntToStr(cantlineas)+" : Símbolo desconocido: " + caracter);
		return NULL;
}


//Error en caso de que falte el simbolo = despues del simbolo :(Asignacion :=) o del símbolo ! (Distinto !=).
int error2(char caracter, AnsiString *buffer){
        FormErrores->ListBoxErrores->Items->Add("Linea "+IntToStr(cantlineas)+" : Se espera un '=' después del símbolo: "+ *buffer);
        ungetc(caracter,archivo);
		return NULL;
}

//Error en caso de q una cadena de caracteres(q empieza con comilla(")) llegue al fin de archivo
int error3(char caracter, AnsiString *buffer){
        FormErrores->ListBoxErrores->Items->Add("Linea "+IntToStr(cantlineas)+" : Cadena de caracteres de una sola línea inválida");
        ungetc(caracter,archivo);
		return NULL;
}

//Error en caso de q una cadena de caracteres(q empieza con comilla(")) contenga un salto de línea sin el caracter +
int error4(char caracter, AnsiString *buffer){
        FormErrores->ListBoxErrores->Items->Add("Linea "+IntToStr(cantlineas)+" : Cadena de caracteres multilínea inválida");
        ungetc(caracter,archivo);
		return NULL;
}

int error5(char caracter, AnsiString *buffer){
        FormErrores->ListBoxErrores->Items->Add("Linea "+IntToStr(cantlineas)+" : Comentario inválido");
        ungetc(caracter,archivo);
		return NULL;
}

int error6(char caracter, AnsiString *buffer){
    FormErrores->ListBoxErrores->Items->Add("Linea "+IntToStr(cantlineas)+" : Identificador inválido");
	ungetc(caracter,archivo);
	return NULL;
}




