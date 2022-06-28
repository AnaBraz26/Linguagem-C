/*Entrada

A entrada contém um inteiro N, (1 ≤ N ≤ 1000) 
correspondente ao número de casos de teste, seguido de N linhas,
 cada linha contendo um número (1 ≤ V ≤ 10100) correspondente ao
  valor que João quer montar com os leds.
Saída

Para cada caso de teste, imprima uma linha contendo o número de
 leds que João precisa para montar o valor desejado, seguido da palavra "leds".
*/

#include<stdio.h>

int main()
{
   int casos, j, i, k, total;
   int led[10] = {6,2,5,5,4,5,6,3,7,6};
   char num[101];

   scanf("%d", &casos);

   for(k = 0; k < casos; k++)
   {
      total = 0;

      scanf("%s", num);

      for(i = 0; num[i] != '\0'; i++)
      {
           for(j = 0; j < 10; j++)
           {
                 if(num[i] == j+48)
                 {
                     total = total + led[j];
                 }
           }
     }

    printf("%d leds\n", total);
  }
return 0;
}
