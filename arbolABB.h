#ifndef _ARBOLABB_H
#define _ARBOLABB_H
#endif
#include <stdio.h>

typedef struct _nodo {
   int dato;
   struct _nodo *derecho;
   struct _nodo *izquierdo;
} tipoNodo;

typedef tipoNodo *pNodo;
typedef tipoNodo *Arbol;

extern void Insertar(Arbol *a, int dat);

extern void Borrar(Arbol *a, int dat);

extern int Buscar(Arbol a, int dat);

extern int Vacio(Arbol r);

extern int EsHoja(pNodo r);

extern int NumeroNodos(Arbol a, int* c);

extern int AlturaArbol(Arbol a, int* altura);

extern int Altura(Arbol a, int dat);

extern void InOrden(Arbol, void (*func)(int*));
extern void PreOrden(Arbol, void (*func)(int*));
extern void PostOrden(Arbol, void (*func)(int*));

extern void Podar(Arbol *a);
extern void auxContador(Arbol a, int*);
extern void auxAltura(Arbol a, int, int*);

extern void Mostrar(int *d);

extern void Podar(Arbol *a);

extern void Insertar(Arbol *a, int dat);

extern void Borrar(Arbol *a, int dat);

extern void InOrden(Arbol a, void (*func)(int*));

extern void PreOrden(Arbol a, void (*func)(int*));

extern void PostOrden(Arbol a, void (*func)(int*));

extern int Buscar(Arbol a, int dat);

extern int Altura(Arbol a, int dat);

extern int NumeroNodos(Arbol a, int *contador);

extern void auxContador(Arbol nodo, int *c);

extern int AlturaArbol(Arbol a, int *altura);

extern void auxAltura(pNodo nodo, int a, int *altura);

extern int Vacio(Arbol r);

extern int EsHoja(pNodo r);

extern void Mostrar(int *d);