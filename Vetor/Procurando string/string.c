/*Faça uma função que receba como parâmetro um texto t, armazenado em um vetor de caracteres e retorne verdadeiro caso 
o texto contenha uma sequência de caracteres p também fornecida como parâmetro, retornando falso em caso contrário.
Assuma que as sequências passadas são strings do c e que seu tamanho é dado pela função strlen.

Ex: Se t=“eu estudo na UFAM, Universidade Federal do Amazonas” 
fosse passado como parâmetro e p=”UFAM”, a função retornaria verdadeiro.

Considere que você não pode usar funções de busca que já existem na linguagem C, tais como strstr 
(que faz o mesmo que estou pedindo na questão). Dentre as opções da string.h, você só pode usar a strlen().*/

#include <string.h>
#include <stdio.h>
// PARTE A MODIFICAR
// INICIOFUNCAOALUNO
// ESCREVA NESSA ÁREA  A FUNCAO questao05 que deve atender ao enunciado do exercício. 
int questao05(char texto[], char padrao[])
{
	int i, j, t, p;
  int cont = 0;
  p = strlen(padrao) - 1;
  t = strlen(texto);
  printf("p = %d t = %d\n", p, t);

  for(i = 0; i < t; i++)
  {
    if(texto[i] == padrao[1])
    {
      cont++;
      printf("cont entrou\n");

      for(j = 2; j <= p; j++)
      {
        printf("texto - %c / padrao - %c\n", texto[i], padrao[j]);

        if(texto[i+1] == padrao[j])
        {
          cont++;
          printf("cont total - %d\n", cont);
          i++;

          if(cont == p)
          {
            return 1;
          }        

        }
        else
        {
          cont = 0;
          break;
        }

      }
      
    }
    
  }
  return 0;
}

//ENDFUNCAOALUNO

/* Exemplo = O povo foge da ignorância. Apesar de viver tão perto dela.
E sonham com melhores tempos idos. Contemplam esta vida numa cela.#
Contemplam#*/

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
