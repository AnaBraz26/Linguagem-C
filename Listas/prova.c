#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TipoDados
{
	char nome[25];
	char endereco[60]; 
	char telefone[20];
}TipoDados;

void quickSort(TipoDados d[], int inicio, int fim)
{
	int i, j, meio;
	TipoDados temp, pivo;	
	
	if(inicio < fim)
	{
		meio = (inicio + fim)/ 2;
		strcpy(pivo.nome, d[meio].nome);			
		i = inicio;
		j = fim;

		while(i <= j)
		{	
			while(strcmp(d[i].nome, pivo.nome) < 0) i++;
			while(strcmp(d[j].nome,pivo.nome) > 0)	j--;
			if(i <= j)
			{
				temp = d[i];
				d[i] = d[j];
				d[j] = temp;
				i++; j--;
			}
		}
		quickSort(d, inicio, j);
		quickSort(d,i, fim);
	}
}
void LerDados(TipoDados d[], int n)
{
  int i;
  for(i = 0; i < n; i++) 
  {
    scanf("%[^\n]%*c", d[i].nome);
    scanf("%[^\n]%*c", d[i].endereco);
    scanf("%[^\n]%*c", d[i].telefone);
  }
}

void imprimeDados(TipoDados d)
{
	printf("%s\n", d.nome);
	printf("%s\n", d.endereco);
	printf("%s\n", d.telefone);	
}

int main()
{
	int qtd, n;

	scanf("%d%*c", &qtd);

	TipoDados *pessoa;

	pessoa = (TipoDados*) malloc(qtd*sizeof(TipoDados));
	
	LerDados(pessoa, qtd);
	
	quickSort(pessoa, 0, qtd-1);

	for(n = 0; n < qtd; n++)
    	imprimeDados(pessoa[n]); 

	free(pessoa);
	return 0;
}