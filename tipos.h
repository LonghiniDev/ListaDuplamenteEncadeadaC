#ifndef _tipos_
#define _tipos_

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct tipoElemento
{
	int dado;
	struct tipoElemento *anterior;
	struct tipoElemento *proximo;
}TElemento;

typedef struct tipoListaDE
{
	int dado;
	TElemento *inicio;
	TElemento *fim;
}TListaDE;

void inicializar (TListaDE *p);
void inserir (TListaDE *p);
void apresentar (TListaDE *p);
void excluir (TListaDE *p);

#endif
