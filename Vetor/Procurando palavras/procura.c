#include <string.h>
#include <stdio.h>
// PARTE A MODIFICAR
// INICIOFUNCAOALUNO
// ESCREVA NESSA ÁREA  A FUNCAO questao05 que deve atender ao enunciado do exercício. 
// função retorna void porque ela modifica diretamente o vetor e não precisa
int questao05(char texto[], char padrao[])
{
	int t, p;
	t = strlen(texto);
	p = strlen(padrao) - 1;
	printf("t - %d\np - %d\n", t, p);
	
	int i, j;
	int cont = 0;
	int cont2 = 0;
	int num = 0;
	for(i = 0; i <= t; i++)
	{
		cont++;
		printf("cont - %d ", cont);
		printf("palavra - %c \n", texto[i]);
		if((texto[i] >= 0 && texto[i] <= 47) || (texto[i] >= 58 &&
		   texto[i] <= 64) || (texto[i] >= 91 && texto[i] <= 96) ||
			(texto[i] >= 123 && texto[i] <= 126))
		{
			printf("Entrou\n");
			if(cont - 1 == p)
			{
				num = i - p;
				printf("Entrou\n");
			   for(j = 0 ; j <= p; j++)
				{	
					printf("0 palavra t - %c // ", texto[num]);
				    printf("0 palavra p - %c \n", padrao[j+1]);
				    if(texto[num] == padrao[j+1])
				    {
				    	printf("1 palavra t - %c // ", texto[num]);
				    	printf("1 palavra p - %c \n", padrao[j+1]);	
				    	cont2++;				    					    	
						printf("%d ", num);
				    	if(cont2 == p)
				    	{
				    		return 1;
				    	}
				    }
				    else
				    {
				    	break;		
				    }
				    num++;		    
				}							
			}
			else 
			{
				cont = 0;
			}
		}
	}	
	return 0;
}

//ENDFUNCAOALUNO

// teste 1 - O povo foge da ignorância. Apesar de viver tão perto dela. E sonham com melhores tempos idos. Contemplam esta vida numa cela.#Contemplam#

// Teste 2 - O povo foge da ignorância. Apesar de viver tão perto dela. 
//E sonham com melhores tempos idos. Contemplam esta vida numa cela.#Vivendo#

// ABAIXO CODIGO USADO PARA TESTE DA FUNCAO. NÃO MOFIQUE!

int main() {
  char texto[2000]; // texto onde vamos buscar a string de consulta
  char padrao[100]; // string de consulta
  unsigned tamVetor;
  unsigned x;

   scanf("%[^#]%*c",texto);
   scanf("%[^#]%*c",padrao);

   if(questao05(texto,padrao)) {
     printf("VERDADEIRO\n");
   }
   else {
     printf("FALSO\n");
   }
   
}
