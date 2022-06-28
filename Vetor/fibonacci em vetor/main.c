/*

Faça um programa que leia um valor e apresente o número de
 Fibonacci correspondente a este valor lido. Lembre que os 2
  primeiros elementos da série de Fibonacci são 0 e 1 e cada 
  próximo termo é a soma dos 2 anteriores a ele. Todos os valores 
  de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.
Entrada

A primeira linha da entrada contém um inteiro T, indicando o número 
de casos de teste. Cada caso de teste contém um único inteiro N (0 ≤ N ≤ 60),
 correspondente ao N-esimo termo da série de Fibonacci.
Saída

Para cada caso de teste da entrada, imprima a mensagem "Fib(N) = X", onde X é o N-ésimo termo da série de Fibonacci.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long int soma, primeiro = 0, segundo = 1, n[61];
   int  i, numero;

   scanf("%d", &numero);

   n[0] = 0;
   n[1] = 1;

   for(i = 2; i < 61; i++)
   {
   soma = primeiro + segundo;
   primeiro = segundo;
   segundo = soma;

   n[i] = soma;
   }

   while(numero > 0)
   {
       scanf("%d", &i);
       printf("Fib(%d) = %lld\n", i, n[i]);
       numero--;
   }
    return 0;
}
