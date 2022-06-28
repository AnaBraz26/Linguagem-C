/*

Faça um programa que leia um vetor A[100]. No final, mostre todas as 
posições do vetor que armazenam um valor menor ou igual a 10 e o valor armazenado em cada uma das posições.
Entrada

A entrada contém 100 valores, podendo ser inteiros, reais, positivos ou negativos.
Saída

Para cada valor do vetor menor ou igual a 10, escreva "A[i] = x", onde i é a posição do
 vetor e x é o valor armazenado na posição, com uma casa após o ponto decimal.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a[100];
    int j;

    for(j = 0; j < 100; j++)
    {
        scanf("%lf", &a[j]);
    }

    for(j = 0; j < 100; j++)
    {
        if(a[j] <= 10)
        {
            printf("A[%d] = %.1lf\n", j, a[j]);
        }
    }
    return 0;
}
