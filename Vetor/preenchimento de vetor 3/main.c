/*

Leia um valor X. Coloque este valor na primeira posição de um vetor N[100].
 Em cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado
  na posição anterior, conforme o exemplo abaixo. Imprima o vetor N.
Entrada

A entrada contem um valor de dupla precisão com 4 casas decimais.
Saída

Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o
 valor armazenado naquela posição. Cada valor do vetor deve ser apresentado com 4 casas decimais.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x[100], n;
    int j;

    scanf("%lf", &x[0]);

    for(j = 1 ; j < 100; j++)
     {
          x[j] = x[j-1] / 2;
     }

    for(j = 0; j < 100; j++)
    {
       printf("N[%d] = %.4lf\n", j, x[j]);
    }

    return 0;
}
