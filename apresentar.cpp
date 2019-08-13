#include "tipos.h"

void apresentar(TListaDE *p)
{
	TElemento *aux;
	aux = p->inicio;
	
	printf ("\n Inicio ao Fim: ");
	while (aux != NULL)
	{
		printf ("\n Valor: %d", aux->dado);
		aux = aux->proximo;
	}
	
	printf ("\n ------------------------");
	
	aux = p->fim;
	printf ("\n Fim ao Inicio: ");
	while (aux != NULL)
	{
		printf ("\n Valor: %d", aux->dado);
		aux = aux->anterior;
	}
}
