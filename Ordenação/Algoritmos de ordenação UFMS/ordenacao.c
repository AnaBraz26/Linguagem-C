#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

#define MAX 100000

//Prototipação de funções
void bubble_sort(int, int[]);
void selection_sort(int, int[]);
void insertion_sort(int, int[]);
void merge_sort(int, int, int[]);
void merge(int, int, int, int[]);
void quick_sort(int, int, int[]);
int partition(int, int, int[]);
void troca(int*, int*);
void imprime_vetor(int, int[]);

int main()
{
	int num, i;
	int vetB[MAX];
	int vetS[MAX];
	int vetI[MAX];
	int vetM[MAX];
	int vetQ[MAX];
	
	long tempo_bubble, tempo_selection, tempo_insertion, tempo_merge, tempo_quick;
	
	struct timeval inicio, fim, total;
	
	scanf("%d", &num);
	
	srand(time(NULL));
	
	for (i = 0; i < num; i++)
		vetQ[i] = vetM[i] = vetI[i] = vetS[i] = vetB[i] = num - i;//rand() % MAX;
	
	//printf("Vetor antes bubble:\n");	
	//imprime_vetor(num, vetB);
	
	gettimeofday(&inicio, NULL);
	bubble_sort(num, vetB);
	gettimeofday(&fim, NULL);
	
	timersub(&fim, &inicio, &total);
	
	tempo_bubble = total.tv_sec * 1000000 + total.tv_usec;
	
	printf("Depois do bubble (%d microsegs):\n", tempo_bubble);	
	//imprime_vetor(num, vetB);
	
	//printf("\nVetor antes selection:\n");	
	//imprime_vetor(num, vetS);
	
	gettimeofday(&inicio, NULL);
	selection_sort(num, vetS);
	gettimeofday(&fim, NULL);
	
	timersub(&fim, &inicio, &total);
	
	tempo_selection = total.tv_sec * 1000000 + total.tv_usec;
	
	printf("Depois do selection(%d microsegs):\n", tempo_selection);	
	//imprime_vetor(num, vetS);
	
	//printf("\nVetor antes insertion:\n");	
	//imprime_vetor(num, vetI);
	
	gettimeofday(&inicio, NULL);
	insertion_sort(num, vetI);
	gettimeofday(&fim, NULL);
	
	timersub(&fim, &inicio, &total);
	
	tempo_insertion = total.tv_sec * 1000000 + total.tv_usec;
	
	printf("Depois do insertion(%d microsegs):\n", tempo_insertion);	
	//imprime_vetor(num, vetI);
	
	//printf("\nVetor antes merge sort:\n");	
	//imprime_vetor(num, vetM);
	
	gettimeofday(&inicio, NULL);
	merge_sort(0, num, vetM);
	gettimeofday(&fim, NULL);
	
	timersub(&fim, &inicio, &total);
	
	tempo_merge = total.tv_sec * 1000000 + total.tv_usec;
	
	printf("Depois do merge sort (%d microsegs):\n", tempo_merge);	
	//imprime_vetor(num, vetM);
	
	//printf("\nVetor antes quick sort:\n");	
	//imprime_vetor(num, vetQ);
	
	gettimeofday(&inicio, NULL);
	quick_sort(0, num - 1, vetQ);
	gettimeofday(&fim, NULL);
	
	timersub(&fim, &inicio, &total);
	
	tempo_quick = total.tv_sec * 1000000 + total.tv_usec;
	
	printf("Depois do quick sort (%d microsegs):\n", tempo_quick);	
	//imprime_vetor(num, vetQ);
	
	return 0;
}

void bubble_sort(int n, int v[MAX])
{
	int i, j;
	
	for (i = n - 1; i > 0; i--)
		for (j = 0; j < i; j++)
			if (v[j] > v[j + 1])
				troca(&v[j], &v[j + 1]);
				
}

void selection_sort(int n, int v[MAX])
{
	int i, j, min;
	
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
			if (v[j] < v[min])
				min = j;
				
		troca(&v[i], &v[min]);
	}
}

void insertion_sort(int n, int v[MAX])
{
	int i, j, x;
	
	for (i = 1; i < n; i++)
	{
		x = v[i];
		
		for (j = i - 1; j >= 0 && v[j] > x; j--)
			v[j + 1] = v[j];
			
		v[j + 1] = x;
	}
}

void merge_sort(int p, int r, int v[MAX])
{
	int q;
	
	if (p < r - 1)//Contém pelo menos dois elementos?
	{
		q = (p + r) / 2;//Calcula o meio
		
		merge_sort(p, q, v);//Ordena a primeira metade
		merge_sort(q, r, v);//Ordena a segunda metade
		merge(p, q, r, v);//Intercala
	}
}

void merge(int p, int q, int r, int v[MAX])
{
	int i, j, k;
	int w[MAX];
	
	i = p;
	j = q;
	k = 0;
	
	//Enquanto houver elementos nos dois vetores
	while (i < q && j < r)
	{
		if (v[i] < v[j])
		{
			w[k] = v[i];
			i++;
		}
		else
		{
			w[k] = v[j];
			j++;
		}
		
		k++;
	}
	
	while (i < q)
	{
		w[k] = v[i];
		i++;
		k++;
	}
	
	while (j < r)
	{
		w[k] = v[j];
		j++;
		k++;
	}
	
	for (i = p; i < r; i++)
		v[i] = w[i - p];
}

void quick_sort(int p, int r, int v[MAX])
{
	int q;
	
	if (p < r)//O vetor tem pelo menos dois elementos
	{
		q = partition(p, r, v);//O elemento na posição q está na posição correta
		quick_sort(p, q - 1, v);//Ordena antes de q
		quick_sort(q + 1, r, v);//Ordena depois de q
	}
}

int partition(int p, int r, int v[MAX])
{
	int i, j, x;
	
	x = v[r];//x recebe o pivô
	i = p - 1;
	
	for (j = p; j < r; j++)
	{
		if (v[j] <= x)
		{
			i++;
			troca(&v[i], &v[j]);
		}
	}
	
	troca(&v[i + 1], &v[r]);
	
	return i + 1;
}

void troca(int* n1, int* n2)
{
	int aux;
	
	aux = *n1;
	*n1 = *n2;
	*n2 = aux;
}

void imprime_vetor(int n, int v[MAX])
{
	int i;
	
	for (i = 0; i < n; i++)
		printf("%d ", v[i]);
		
	printf("\n");
}