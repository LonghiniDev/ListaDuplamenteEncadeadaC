#include "tipos.h"

void inserir(TListaDE *p)
{
	TElemento *novo;
	//novo = (TElemento*) malloc (sizeof(TElemento));
	novo = new TElemento;
	
	printf("\n informe o valor: ");
	scanf("%d", &novo -> dado);
	
	novo->anterior = NULL;
	novo->proximo = NULL;
	
	if (p->inicio == NULL)
	{
		p->inicio = novo;
		p->fim = novo;
	}
	else
	{
		p->fim->proximo = novo;
		novo->anterior = p->fim;
		p->fim = novo;
	}
}

