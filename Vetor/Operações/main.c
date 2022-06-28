#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X[11], Y[11], i, j, opcao, aux;
    int soma[11], subtracao[11], multiplicacao[11], divisao[11], juncao[22], intersecao[11];
    int s;

    scanf("%d", &opcao);

    for(i = 1; i < 11; i++)
    {
        scanf("%d", &X[i]);
    }

    for(j = 1; j < 11; j++)
    {
        scanf("%d", &Y[j]);
    }

    if(opcao > 6)
    {
        printf("Opcao invalida");
    }

    switch(opcao)
    {
    case 1:
        for(i = 1,j = 1,s = 1; i < 11 && j < 11 && s < 11; i++,j++,s++)
        {
            soma[s] = X[i] + Y[j];
        }

        printf("Soma = ");
        for(s = 1; s < 11; s++)
        {
            printf("%d ", soma[s]);
        }
        break;

    case 2:
        for(i = 1,j = 1,s = 1; i < 11 && j < 11 && s < 11; i++,j++,s++)
        {
            subtracao[s] = X[i] - Y[j];
        }

        printf("Subtracao = ");
        for(s = 1; s < 11; s++)
        {
            printf("%d ", subtracao[s]);
        }
        break;

    case 3:
        for(i = 1,j = 1,s = 1; i < 11 && j < 11 && s < 11; i++,j++,s++)
        {
            multiplicacao[s] = X[i] * Y[j];
        }

        printf("Multiplicacao = ");
        for(s = 1; s < 11; s++)
        {
            printf("%d ", multiplicacao[s]);
        }
        break;

    case 4:
        for(i = 1,j = 1,s = 1; i < 11 && j < 11 && s < 11; i++,j++,s++)
        {
            divisao[s] = X[i] / Y[j];
        }

        printf("Divisao = ");
        for(s = 1; s < 11; s++)
        {
            printf("%d ", divisao[s]);
        }
        break;

    case 5:
       printf("Juncao = ");
       for(i = 1; i < 11; i++)
       {
           printf("%d ", X[i]);
       }

       for(j = 1; j < 11; j++)
       {
           printf("%d ", Y[j]);
       }
        break;

    case 6:
        printf("Intersecao = ");
        for(i = 1; i < 11; i++)
        {
            for(j = 1; j < 11; j++)
            {
                 aux = Y[j];
                 Y[j] = Y[j+1];
                 Y[j+1] = aux;

                 if(X[i] == Y[j])
               {
                   printf("%d ", X[i]);
                }
            }
        }
        break;

        default:
        break;
    }
    return 0;
}
