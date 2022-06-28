#include <stdio.h>

typedef struct { 
		char nome[20];
	    int id;
} tipoDados;

typedef struct tipoNo {
 tipoDados d;
 struct tipoNo *prox;
} tipoNo;

typedef struct tipoFila {
 tipoNo *prim;
 tipoNo *ult;
} tipoFila;

// Funcoes a serem feitas. 
// Coloque os includes necessários para seu para o seu 
// programa aqui
// SUAS FUNCOES DEVEM COMPLEMENTAR O PROGRAMA PRINCIPAL
// ELE JA TEM CHAMADAS PARA SUAS FUNCOES
#include <stdlib.h>
#include <string.h>

void criaFila(tipoFila *f)
{
	f->prim = NULL;
	f->ult = NULL;
}

void insereNaFila(tipoFila *f, tipoDados dados)
{
	tipoNo *aux;
	aux = (tipoNo*) malloc(sizeof(tipoNo));
	aux->d = dados;
	aux->prox = f->prim++;
	f->ult = aux;
}

tipoDados removeDaFila(tipoFila *f)
{		
	tipoNo *aux;
	aux = (tipoNo*) malloc(sizeof(tipoNo));	
	aux = f->prim;
	f->prim++;
}

// FIM DO SEU CODIGO

void mostraFila(tipoFila *p) {
 tipoNo *aux= p->prim;
	
	while(aux) {
	printf("%s\n",aux->d.nome);
	printf("%d\n",aux->d.id);
		aux = aux->prox;
	}
}

int  main() {
	tipoDados pessoa;
	tipoFila p1;
	tipoFila p2;
		
	criaFila(&p1);
	criaFila(&p2);
	
	scanf("%[^\n]%*c",pessoa.nome);
	scanf("%d%*c",&pessoa.id);
	insereNaFila(&p1,pessoa);
	printf("Primeiro \n");
	mostraFila(&p1);
	
	scanf("%[^\n]%*c",pessoa.nome);
	scanf("%d*c",&pessoa.id);
	insereNaFila(&p1,pessoa);
	printf("Segundo \n");
	mostraFila(&p1);

	pessoa = removeDaFila(&p1);
	insereNaFila(&p2,pessoa);
	printf("Terceiro\n");
	mostraFila(&p1);
	mostraFila(&p2);

	scanf("%[^\n]%*c",pessoa.nome);
	scanf("%d*c",&pessoa.id);
	insereNaFila(&p1,pessoa);
	printf("Quarto \n");
	mostraFila(&p1);

	scanf("%[^\n]%*c",pessoa.nome);
	scanf("%d*c",&pessoa.id);
	insereNaFila(&p1,pessoa);
	printf("Quinto\n");
	mostraFila(&p1);
	
	pessoa = removeDaFila(&p1);
	insereNaFila(&p2,pessoa);
	printf("Sexto\n");
	
	
	mostraFila(&p1);
	mostraFila(&p2);
	
}