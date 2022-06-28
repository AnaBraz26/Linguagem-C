/*

Escreva um programa que leia 2 valores X e Y e que imprima todos os valores 
entre eles cujo resto da divisão dele por 5 for igual a 2 ou igual a 3.
Entrada

O arquivo de entrada contém 2 valores positivos inteiros quaisquer, não necessariamente em ordem crescente.
Saída

Imprima todos os valores conforme exemplo abaixo, sempre em ordem crescente.
*/

#include <stdio.h>

int main() {

     int x,y,aux;
    scanf("%d", &x);
    scanf("%d", &y);
    aux = x;

     if(x > y)
     {
      aux = y;
       y = x;
       x = aux;
     }
    aux++;
    while(aux >= x && aux < y)
    {

     if(aux % 5 == 2 || aux % 5 == 3)
     {

     printf("%d\n", aux);

     }

    ++aux;

    }

     return 0;
}
