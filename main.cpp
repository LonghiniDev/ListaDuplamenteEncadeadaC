#include "tipos.h"

int main(){
	TListaDE listaDE;
	int opcao;
	
	inicializar (&listaDE);
	
	do
	{
		printf("\n 1. Inserir            ");
		printf("\n 2. Apresentar         ");
		printf("\n 3. Excluir            ");
		printf("\n 0. Sair               ");
		printf("\n 0. Escolha uma opção: ");
		scanf("%d",&opcao);
		switch(opcao)
		{
			case 1: inserir (&listaDE); break;
			case 2: apresentar (&listaDE); break;
			case 3: excluir (&listaDE); break;
		}
	} while (opcao != 0);
}
