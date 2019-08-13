#include "tipos.h"

void excluir(TListaDE *p)
{
	int valorExclusao;
	
	printf("\n informe o valor para exclusão: ");
	scanf("%d", &valorExclusao);
	
	TElemento *atual;
	atual = p->inicio;
	
	//No inicio
	while (atual != NULL)
	{
		if (atual->dado == valorExclusao)
		{
			if (atual == p->inicio)
			{
				p->inicio = p->inicio->proximo;
				if (p->inicio==p->fim)
				{
					p->fim = NULL;
				}
				else
				{
				(atual->proximo) -> anterior = NULL;
				}
			}
		}
		else
		{
			if (atual == p->fim)
			{
				(atual->anterior)->proximo = NULL;
				p->fim = atual->anterior;
			}
			else
			{
				(atual->proximo)->anterior = atual->anterior;
				(atual->anterior)->proximo = atual->proximo;
			}
		}
	}
}
