#include <stdio.h>

int soma(int vet[], unsigned tamanhoVetor)
{	
	int i;

	for(i= 0; i < tamanhoVetor; i++)
	{
		return soma(vet,tamanhoVetor-1) + vet[tamanhoVetor-1];
	}

return 0;
}

//ENDFUNCAOALUNO

void ler(int v[], unsigned tamanhoVetor) {
  unsigned cont;
  for(cont = 0; cont < tamanhoVetor; cont++) 
  {
    scanf("%d%*c",&v[cont]);
  }
} 

int main() {
  unsigned tamanhoVetor;

  scanf("%u%*c",&tamanhoVetor);
  int vet[tamanhoVetor];

  ler(vet,tamanhoVetor);
  printf("Soma = %d\n", soma(vet, tamanhoVetor));
}