/*

Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a 
soma dos números que não são múltiplos de 13 entre X e Y, incluindo ambos.
Entrada

O arquivo de entrada contém 2 valores inteiros quaisquer, não 
necessariamente em ordem crescente.
Saída

Imprima a soma de todos os valores não divisíveis por 13 entre os
 dois valores lidos na entrada, inclusive ambos se for o caso.
*/

#include <stdio.h>
 
int main() {
 
  int X,Y,aux, soma;
    scanf("%d\n", &X);
    scanf("%d", &Y);
    aux = X;
    soma = 0;
     if(X > Y)
     {
      aux = Y;
       Y = X;
       X = aux;
     }

    while(aux >= X && aux <= Y){

     if(aux % 13 != 0)
     {

     soma+= aux;

     }

    ++aux;

    }


    printf("%d\n", soma);
    
    return 0;
}