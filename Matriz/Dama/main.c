/* O grande mestre de xadrez Kary Gasparov inventou um novo tipo de problema de xadrez:
 dada a posição de uma dama em um tabuleiro de xadrez vazio (ou seja, um tabuleiro 8 × 8, com 64 casas), 
 de quantos movimentos, no mínimo, ela precisa para chegar em outra casa do tabuleiro?

Kary achou a solução para alguns desses problemas, mas teve dificuldade com outros, e por isso pediu que 
você escrevesse um programa que resolve esse tipo de problema.  
Entrada

A entrada contém vários casos de teste. A primeira e única linha de cada caso de teste contém quatro inteiros 
X1, Y1, X2 e Y2 (1 ≤ X1, Y1, X2, Y2 ≤ 8). A dama começa na casa de coordenadas (X1, Y1), e a casa de destino é 
a casa de coordenadas(X2, Y2). No tabuleiro, as colunas são numeradas da esquerda para a direita de 1 a 8 e as
 linhas de cima para baixo também de 1 a 8. As coordenadas de uma casa na linha X e coluna Y são (X, Y ).

O final da entrada é indicado por uma linha contendo quatro zeros.
Saída

Para cada caso de teste da entrada seu programa deve imprimir uma única linha na saída, contendo um número 
inteiro, indicando o menor número de movimentos necessários para a dama chegar em sua casa de destino.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2, y2;

    while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2) && x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0)
    {
       if(x1 == x2 && y1 == y2) //Mesma posicao
       {
           printf("0\n");
       }
       else if((x1 - x2) == (y1 - y2)|| (x2 - x1) == (y1 - y2) ||
               (x2 - x1) == (y2 - y1)|| (x1 - x2) == (y2 - y1)|| x1 == x2|| y1 == y2) //Mesma diagonal|| mesma linha|| mesma coluna
       {
          printf("1\n");
       }
       else //Qualquer outra posicao
       {
           printf("2\n");
       }

    }
    return 0;
}