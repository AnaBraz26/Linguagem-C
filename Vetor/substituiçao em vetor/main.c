/*

Faça um programa que leia um vetor X[10]. Substitua a seguir, 
todos os valores nulos e negativos do vetor X por 1. Em seguida mostre o vetor X.
Entrada

A entrada contém 10 valores inteiros, podendo ser positivos ou negativos.
Saída

Para cada posição do vetor, escreva "X[i] = x", onde i é a posição do vetor e x é o valor armazenado naquela posição.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10], j;

    for(j = 0; j < 10; j++)
    {
        scanf("%d", &x[j]);
    }


    for(j = 0 ; j < 10; j++)
      {
             if(x[j] <= 0)
             {
                 x[j] = 1;
                 printf("X[%d] = %d\n", j, x[j]);
             }
             else
             {
                 printf("X[%d] = %d\n", j, x[j]);
             }

      }

   return 0;
}
