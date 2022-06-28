#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, c;
    double matriz[12][12], soma = 0.0, media = 0.0;
    char letra;

    scanf("%d", &c);
    scanf("%c", &letra);

    switch (letra)
    {
    case 'S':

        for (i = 0; i < 12; i++)
            {
            for (j = 0; j < 12; j++)
                {
                   scanf("%lf", &matriz[i][j]);
                }
            }

         for (i = 0; i < 12; i++)
            {
            for (j = 0; j < 12; j++)
                {
                   if(matriz[i][j] == matriz[i][c])
                   {
                       soma = soma + matriz[i][j];
                   }
                }
            }

        printf("%.1lf\n", soma);

        break;

        case 'M':
          for (i = 0; i < 12; i++)
            {
            for (j = 0; j < 12; j++)
                {
                    scanf("%lf", &matriz[i][j]);
                }
            }


            for (i = 0; i < 12; i++)
            {
                for (j = 0; j < 12; j++)
                {
                   if(matriz[i][j] == matriz[i][c])
                   {
                       soma = soma + matriz[i][j];
                   }
                }
            }

            media = soma/12;

            printf("%.1lf\n", media);

            break;

        default:
        break;
    }


    return 0;
}
