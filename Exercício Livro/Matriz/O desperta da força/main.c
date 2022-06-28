/*Você deve escrever um programa que, dado um terreno N x M, 
procura pelo padrão do sabre de luz nele. Nenhuma varredura tem mais do que um padrão de sabre de luz.
Entrada

A primeira linha da entrada tem dois números positivos N e M, representando,
 respectivamente, o número de linhas e de colunas varridos no terreno (3 ≤ N, M ≤ 1000).
  Cada uma das próximas N linhas tem M inteiros, que descrevem os valores lidos em cada
   célula do terreno (-100 ≤ Tij ≤ 100, para 1 ≤ i ≤ N e 1 ≤ j ≤ M).
Saída

A saída é uma única linha com 2 inteiros X e Y separados por um espaço. 
Eles representam a coordenada (X,Y) do sabre de luz, caso encontrado.
 Se o terreno não tem um padrão de sabre de luz, X e Y são ambos zero.
*/

#include <stdio.h>

int main()
{
    int i, j, l, c;

    scanf("%d%d", &l, &c);

    int matriz[l+1][c+1];

    if(l >= 3 && c >= 3 && l <= 1000 && c <=1000)
    {
    for(i = 1; i < l+1; i++)
    {
        for(j = 1; j < c+1; j++)
        {
           scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 2; i < l; i++)
    {
        for(j = 2; j < c; j++)
        {
            if(matriz[i][j] == 42)
            {
                if(matriz[i-1][j] == 7 && matriz[i-1][j+1] == 7 && matriz[i-1][j-1] == 7 &&
                 matriz[i+1][j] == 7 && matriz[i+1][j+1] == 7 && matriz[i+1][j-1] == 7
                 && matriz[i][j+1] == 7 && matriz[i][j-1] == 7)
                {
                printf("%d %d\n", i, j);
                return 0;
                }

            }
        }
    }

    printf("0 0\n");
    }

    return 0;
}
