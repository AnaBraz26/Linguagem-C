#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 500000

void printVetor(float vetor1[], float vetor2[], int n)
{
  int i;

  printf("vetor1 = ");
  for(i = 0; i < n; i++)
  {
    printf("%f ", vetor1[i]);
  }
  printf("\n");

  printf("vetor2 = ");
  for(i = 0; i < n; i++)
  {
    printf("%f ", vetor2[i]);
  }
  printf("\n");
}

//preenche o vetor1
void preencheVetorAl(float vetor1[], int n)
{
 int i;
 srand(time(NULL));
 for(i = 0; i < n; i++)
 {
  vetor1[i] = rand() % 100000;
 }
}

//Copia o vetor1 para vetor2
void copiaVetor(float vetor2[], float vetor1[], int n)
{
  int i;
  for(i = 0; i < n; i++)
  {
    vetor2[i] = vetor1[i];
  }
  printVetor(vetor1, vetor2, MAX);
}

//Verifica se o vetor1 está ordenado
float estaOrdenado(float vet[], int n)
{
  int i;
  for(i = 0; i < n - 1; i++)
  {
    if(vet[i] > vet[i+1])
    {
      return 0;
    }
  }
  return 1;
}

void mergeSortR(float v[], float vaux[], unsigned inicio, unsigned fim)
{
  unsigned  meio, i, j, k;
  if(inicio < fim)
  {
    meio = (inicio + fim)/ 2;
    mergeSortR(v,vaux,inicio,meio);
    mergeSortR(v,vaux,meio+1,fim);

    //Intercalação
    i = inicio;
    k = inicio;
    j = meio + 1;

    while((i <= meio) && (j <= fim))
    {
      if(v[i] < v[j])
      {
        vaux[k] = v[i];
        i++;
      }
      else
      {
        vaux[k] = v[j];
        j++;
      }

      k++;
    }

    while(i <= meio)
    {
      vaux[k] = v[i];
      i++;
      k++;
    }

    while(j <= fim)
    {
      vaux[k] = v[j];
      j++;
      k++;
    }

    for(k = inicio; k <= fim; k++)
    {
      v[k] = vaux[k];
    }
  }
}

void mergeSort(float v[], unsigned tamanhoVetor)
{
  float *vaux;
  vaux = (float*) malloc(tamanhoVetor*sizeof(float));
  mergeSortR(v,vaux,0,tamanhoVetor-1);
  free(vaux);
}

void quickSort(float vet1[], int inicio, int fim)
{
  int i, j;
  float pivo, temp;

 
    pivo = vet1[(inicio+fim)/2];
    i = inicio;
    j = fim;

  while(i <= j)
  {
    while(vet1[i] < pivo)
    {
      i++;
    }
    while(vet1[j] > pivo)
    {
      j--;
    }
    if(i <= j)
    {
      temp = vet1[i];
      vet1[i] = vet1[j];
      vet1[j] = temp;
      i++;
      j--;
    }
  }
}


void Insercao(float vet1[], int n)
{
 int i, chave, j;
 for(i = 1; i < n; i++)
 {
  chave = vet1[i];
  j = i - 1;

  while(j >= 0 && vet1[j] > chave)
  {
    vet1[j+1] = vet1[j];
    j--;
  }
  vet1[j+1] = chave;
 }
}

float buscarBinaria(float vet[], int tamanhoVetor, int chave)
{
  int i, m, f;
  
  i = 0;
  f = tamanhoVetor - 1;
  
  while(i <= f)
  {
    m = (i+f)/2;
    if(chave > vet[m])
    {
      i = m + 1;
    }
    else if(chave < vet[m])
    {
      f = m - 1;
    }
    else
    {
      return 1;
    }
  }
  return 0;
}

// Verifica se no vetor 1 existe o elemento que está no vetor 2
float thesame(float vet1[], float vet2[], int n)
{
  int i;

  for(i = 0; i < n; i++)
  {
    if(buscarBinaria(vet1, n, vet2[i]) == 0)
    {
      return 0;
    }    
  }
  return 1;
}

int main()
{
  float *vetor1;
  float *vetor2;
  // static float vetorAux[MAX];

  vetor1 =(float*) malloc(MAX*sizeof(float));
  vetor2 =(float*) malloc(MAX*sizeof(float));

  preencheVetorAl(vetor1, MAX);
  copiaVetor(vetor2,vetor1, MAX);

  printf("inicio da ordenacao\n");

  mergeSort(vetor1, MAX);

  //quickSort(vetor1, 0, MAX-1);

  //Insercao(vetor1, MAX);
 
  printVetor(vetor1, vetor2, MAX);

  printf("Fim da ordenacao\n");

  if(estaOrdenado(vetor1,MAX) && thesame(vetor1, vetor2,MAX))
  {
    printf("a ordenacao funcionou\n");
  }
  else
  {
    printf("algo deu errado\n");
  }

  free(vetor1);
  free(vetor2);

  return 0;

}