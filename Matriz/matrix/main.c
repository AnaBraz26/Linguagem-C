#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n = 8;
    int matriz[10][10];
    int aux = 0;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(j = 0; j < 10; j++)
    {
        aux = matriz[1][j];
        matriz[1][j] = matriz[7][j];
        matriz[7][j] = aux;
    }

    for(i = 0; i < 10; i++)
    {
        aux = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = aux;
    }

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(i + j == n + 1)
            {
                aux = matriz[i][i];
                matriz[i][i] = matriz[i][j];
                matriz[i][j] = aux;
            }
        }
    }

    for(i = 0; i < 10; i++)
    {
        for(j = 9; j >= 0; j--)
        {
            aux = matriz[4][j];
            matriz[4][j] = matriz[i][9];
            matriz[i][9] = aux;
        }
    }

    printf("\"Matriz resultante\"\n");

     for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

