#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TipoAluno
{
	char nome[30];
	char pibic; // verdadeiro ou falso
	char curso[30];
	float Coeficiente;
}TipoAluno;

typedef struct tipoNo
{
	TipoAluno dado;
	struct tipoNo *prox;
}tipoNo;

typedef struct TipoLista
{
	tipoNo *prim;
}TipoLista;



void mostraAluno(TipoAluno al)
{
	printf("Nome: %s\n", al.nome);
	printf("Curso: %s\n", al.curso);
	printf("Coeficiente: %.2f\n", al.Coeficiente);
	if(al.pibic) printf("e aluno de pibic\n");
	else printf("Nao e aluno de pibic\n");

	printf("\n");
}

TipoAluno * buscaElementoLista(TipoLista *plista, char *nome)
{
	tipoNo *aux;

	aux = plista->prim;

	while(aux)
	{
		if(!strcmp(nome, aux->dado.nome)) 
		{
			return &(aux->dado);
		}

		aux = aux->prox;
	}
	return NULL;
}

void mostraLista(TipoLista *plista)
{
	tipoNo *aux;

	aux = plista->prim; //aponta para o primeiro elemento da lista

	while(aux)
	{
		mostraAluno(aux->dado); //mostra os dados dos alunos
		aux = aux->prox; //aponta para o proximo elemnto da lista
	}
}


// Os alunos são inseres de modo ao contrario
void insereElementoLista(TipoLista *plista, TipoAluno al)
{
	tipoNo *aux; // cria um auxiliar

	aux = (tipoNo *) malloc(sizeof(tipoNo)); //cria um espaço na memória para aux
	aux->dado = al; //passa os dados do aluno para o aux 
	aux->prox = plista->prim; //o endereço do primeiro elemento da lista é passado para o aux, tornando o primeiro elemento
	plista->prim = aux; //o endereço de aux é passado para o primeiro elemento da lista
}

//Cria a lista vazia
void crialista(TipoLista *lista)
{
	lista->prim = NULL;
}

int main()
{
	TipoAluno aluno;
	TipoAluno *pAluno;
	TipoLista l1, l2;

	crialista(&l1);

	strcpy(aluno.nome, "Ana");
	strcpy(aluno.curso, "Ciencia da computacao");
	aluno.Coeficiente = 9.5 ;
	aluno.pibic =  1 ;

	insereElementoLista(&l1, aluno);

	strcpy(aluno.nome, "Joao");
	strcpy(aluno.curso, "Engenharia de Software");
	aluno.Coeficiente =  8.0;
	aluno.pibic =  0 ;

	insereElementoLista(&l1, aluno);

	strcpy(aluno.nome, "Bianca");
	strcpy(aluno.curso, "Engenharia civil");
	aluno.Coeficiente = 7.0 ;
	aluno.pibic =  1 ;

	insereElementoLista(&l1, aluno);

	strcpy(aluno.nome, "Killua");
	strcpy(aluno.curso, "Desenvolver de games");
	aluno.Coeficiente =  9.0;
	aluno.pibic =  1 ;

	insereElementoLista(&l1, aluno);

	strcpy(aluno.nome, "Joshua");
	strcpy(aluno.curso, "Ciencia da computacao");
	aluno.Coeficiente = 7.6 ;
	aluno.pibic =  0 ;

	insereElementoLista(&l1, aluno);

	mostraLista(&l1);

	char nome[30];

	printf("Entre com uma chave de busca: ");
	scanf("%[^\n]%*c", nome);

	pAluno = buscaElementoLista(&l1, nome);

	if(pAluno)
	{
		printf("Encontrado na lista: \n");
		mostraAluno(*pAluno);
	}
	else printf("Esse aluno nao existe nos dados!\n");
}	