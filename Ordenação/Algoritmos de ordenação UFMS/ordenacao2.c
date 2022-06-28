#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define MAX 100

void descer(int, int[], int);
void subir(int, int[]);
void construirHeap(int[], int);
void alterar_prioridade(int, int[], int);
void inserir_heap(int, int[], int*);
int remover_heap(int[], int*);
void heap_sort(int[], int);
void imprime_vetor(int, int[]);
void troca(int*, int*);

int main()
{
	int i, tam, valor, rem;
	int heap[MAX];
	
	scanf("%d", &tam);
	
	srand(time(NULL));
	
	for (i = 0; i < tam; i++)
		heap[i] = rand() % MAX;
		
	imprime_vetor(tam, heap);
	
	construirHeap(heap, tam);
	
	imprime_vetor(tam, heap);
	
	scanf("%d", &valor);
	
	inserir_heap(valor, heap, &tam);
	
	imprime_vetor(tam, heap);
	
	rem = remover_heap(heap, &tam);
	
	printf("Valor removido = %d\n", rem);
		
	heap_sort(heap, tam);
	
	imprime_vetor(tam, heap);
	
	return 0;
}

//"Desce" um elemento no heap até a posição correta
void descer(int indice, int h[MAX], int num)
{
	int filho_esq, filho_dir, filho_maior, aux;
	
	filho_esq = 2 * indice + 1;
	filho_dir = 2 * indice + 2;
	
	if (filho_esq < num)//Tem filho da esquerda
	{
		filho_maior = filho_esq;
		if (filho_dir < num)//Tem filho da direita
		{
			if (h[filho_dir] > h[filho_esq])
				filho_maior = filho_dir;
		}
		
		if (h[indice] < h[filho_maior])
		{
			//Troca os elementos de posição
			aux = h[indice];
			h[indice] = h[filho_maior];
			h[filho_maior] = aux; 
			
			//Continua a descida
			descer(filho_maior, h, num);
		}
	}
}

//"Sobe" o elemento no heap até a posição correta
void subir(int indice, int h[MAX])
{
	int ind_pai, aux;
	
	if (indice > 0)//Tem pai
	{
		ind_pai = (indice - 1) / 2;
		
		if (h[indice] > h[ind_pai])
		{
			//Troca os elementos de posição
			aux = h[indice];
			h[indice] = h[ind_pai];
			h[ind_pai] = aux;
			
			//Continua a subida
			subir(ind_pai, h); 
		}
	}
}

//Função que transforma um vetor de entrada em um heap máximo
void construirHeap(int h[MAX], int num)
{
	int ultimo, i;
	
	ultimo = num / 2 - 1;
	
	for (i = ultimo; i >= 0; i--)
		descer(i, h, num);
} 

//Função para alterar prioridade
void alterar_prioridade(int indice, int h[], int num)
{
	//TODO
}

//Função para inserir um novo elemento no heap
void inserir_heap(int novoValor, int h[MAX], int* num)
{
	if (*num < MAX)
	{
		h[*num] = novoValor;
		
		subir(*num, h);
		
		*num = *num + 1;
	}
	else
		printf("Overflow\n");
}

//Função para remover um elemento do heap
int remover_heap(int h[MAX], int* num)
{
	int chave;
	
	chave = INT_MIN;
	
	if (*num > 0)//Posso remover
	{
		chave = h[0];
		
		h[0] = h[*num - 1];
		
		*num = *num - 1;
		
		descer(0, h, *num);
	}
	else
		printf("Underflow!\n");
		
	return chave;
}

//Algoritmo de ordenação heapsort
void heap_sort(int h[MAX], int num)
{
	int i;
	
	construirHeap(h, num);
	
	for (i = num - 1; i > 0; i--)
	{
		troca(&h[0], &h[num - 1]);
		
		num--;
		
		descer(0, h, num);
	}
}

void imprime_vetor(int n, int v[MAX])
{
	int i;
	
	for (i = 0; i < n; i++)
		printf("%d ", v[i]);
		
	printf("\n");
}

void troca(int* n1, int* n2)
{
	int aux;
	
	aux = *n1;
	*n1 = *n2;
	*n2 = aux;
}