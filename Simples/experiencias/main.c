/*

Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua
 ajuda para organizar os experimentos de um laboratório o qual ela é responsável.
  Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o 
  percentual de cada tipo de cobaia utilizada.

Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. 
Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, 
o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.
Entrada

A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir.
 Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias 
 utilizadas e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).
Saída

Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual
 de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado
  com dois dígitos após o ponto.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int q, ratos = 0, sapos = 0, coelhos = 0, soma = 0, quantia, i = 0;
    double porcentratos, porcentsapos, porcentcoelhos;
    char c;
    scanf("%d\n", &quantia);

     while(quantia > i)
      {
        scanf("%d %c\n", &q, &c);

            if(c == 'C')
          {
             coelhos += q;
          }
          if (c == 'S')
          {
             sapos+= q;
          }
          if (c == 'R')
          {
             ratos+= q;
          }
          soma += q;
          i++;
    }

    porcentratos = (double) (ratos*100)/(double)soma;
    porcentsapos = (double) (sapos*100)/(double)soma;
    porcentcoelhos = (double) (coelhos*100)/(double)soma;

    printf("Total: %d cobaias\n", soma);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %\n", porcentcoelhos);
    printf("Percentual de ratos: %.2lf %\n", porcentratos);
    printf("Percentual de sapos: %.2lf %\n", porcentsapos);

    return 0;
}
