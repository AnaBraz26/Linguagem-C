/*Entrada

A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'),
 indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. 
 Seguem os 144 valores de ponto flutuante que compõem a matriz.
Saída

Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n = 10;
    double matriz[12][12], soma = 0.0, media = 0.0;
    char letra;

    scanf("%c", &letra);

    switch (letra)
    {
    case 'S':

        for (i = 0; i < 12; i++)
            {
            for (j = 0; j < 12; j++)
                {
                    printf("[%d] [%d]", i, j);
                    scanf("%lf", &matriz[i][j]);
                }
            }

         for (i = 0; i < 12; i++)
            {
            for (j = 0; j < 12; j++)
                {
                   if(i + j > n + 1)
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
                   if(i + j > n + 1)
                   {
                       soma = soma + matriz[i][j];
                   }
                }
            }

            media = soma/66;

            printf("%.1lf\n", media);

            break;

        default:
        break;
    }

    return 0;
}
