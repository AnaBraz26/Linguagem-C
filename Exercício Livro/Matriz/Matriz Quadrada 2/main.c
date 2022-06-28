/*

Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), 
correspondente a ordem de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.
Entrada

A entrada consiste de vários inteiros, um valor por linha,
 correspondentes as ordens das matrizes a serem construídas.
  O final da entrada é marcado por um valor de ordem igual a zero (0).
Saída

Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo.
 (os valores das matrizes devem ser formatados em um campo de tamanho 3 justificados à
  direita e separados por espaço. Após o último caractere de cada linha da matriz não deve 
  haver espaços em branco. Após a impressão de cada matriz deve ser deixada uma linha em branco.
*/

#include<stdio.h>

int main()
{
    int i, j, m;
    int matriz[100][100];

    while(scanf("%d", &m) && m != 0)
    {
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < m; j++)
            {
               if(i == j)
               {
                   matriz[i][j] = 1;
               }

               if(i < j)
               {
                   matriz[i][j] = matriz[i][j-1] + 1;
               }
               if(i > j)
               {
                   matriz[i][j] = matriz[i-1][j] + 1;
               }
               if(matriz[0][j])
               {
                   matriz[0][j] = 1 + j;
               }

               if(j == 0)
               {
                  printf("%3d", matriz[i][j]);
               }
               else
               {
                   printf(" %3d", matriz[i][j]);
               }

            }

            printf("\n");
        }
        printf("\n");

    }

return 0;
}

