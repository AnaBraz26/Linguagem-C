/*

Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 15), 
correspondente a ordem de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.
Entrada

A entrada consiste de vários inteiros, um valor por linha, 
correspondentes as ordens das matrizes a serem construídas.
 O final da entrada é marcado por um valor de ordem igual a zero (0).
Saída

Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo.
 Os valores das matrizes devem ser formatados em um campo de tamanho T justificados à 
 direita e separados por espaço, onde T é igual ao número de dígitos do maior número da matriz.
  Após o último caractere de cada linha da matriz não deve haver espaços em branco.
   Após a impressão de cada matriz deve ser deixada uma linha em branco.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int i, j, m;
    int matriz[15][15];

    while(scanf("%d", &m)&& m != 0)
    {
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < m; j++)
            {
               if(i == j)
               {
                   matriz[i][j] = pow(4, i);
               }
               else if(i < j)
               {
                   matriz[i][j] = matriz[i][j-1] * 2;
               }
               else if(i > j)
               {
                   matriz[i][j] = matriz[i-1][j] * 2;
               }
               else if(matriz[0][j])
               {
                   matriz[0][j+1] = j * 2;
               }
            }
        }

        for (i = 0; i < m; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(m == 1|| m == 2)
               {
                    if(j == 0)
                    {
                       printf("%1d", matriz[i][j]);
                    }
                    else
                    {
                       printf("%2d", matriz[i][j]);
                    }
               }

               if(m == 3 || m == 4)
               {
                    if(j == 0)
                     {
                        printf("%2d", matriz[i][j]);
                     }
                     else
                     {
                        printf("%3d", matriz[i][j]);
                     }
               }

               if(m == 5)
               {
                    if(j == 0)
                    {
                       printf("%3d", matriz[i][j]);
                    }
                    else
                    {
                       printf("%4d", matriz[i][j]);
                    }
               }

               if(m == 6 || m == 7)
               {
                    if(j == 0)
                    {
                        printf("%4d", matriz[i][j]);
                    }
                    else
                    {
                        printf("%5d", matriz[i][j]);
                    }
               }

               if(m == 8 ||m == 9)
               {
                     if(j == 0)
                     {
                        printf("%5d", matriz[i][j]);
                     }
                     else
                     {
                        printf("%6d", matriz[i][j]);
                     }
               }

               if(m == 10)
               {
                    if(j == 0)
                    {
                        printf("%6d", matriz[i][j]);
                    }
                    else
                    {
                        printf("%7d", matriz[i][j]);
                    }
               }

               if(m == 11|| m == 12)
               {
                    if(j == 0)
                   {
                      printf("%7d", matriz[i][j]);
                   }
                   else
                   {
                       printf("%8d", matriz[i][j]);
                   }
               }

               if(m == 13 || m == 14)
               {
                    if(j == 0)
                   {
                      printf("%8d", matriz[i][j]);
                   }
                     else
                   {
                     printf("%9d", matriz[i][j]);
                   }
               }

               if(m == 15)
               {
                    if(j == 0)
                  {
                     printf("%9d", matriz[i][j]);
                  }
                    else
                  {
                     printf("%10d", matriz[i][j]);
                  }
               }
            }
            printf("\n");
        }
        printf("\n");

    }

return 0;
}
