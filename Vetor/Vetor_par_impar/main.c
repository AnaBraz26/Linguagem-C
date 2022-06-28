#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[11], i;
    int par = 0;
    int impar = 0;

    for(i = 1; i < 11; i++)
    {
        scanf("%d", &numero[i]);
    }
    printf("Numeros Pares:\n");
    for(i = 1; i < 11; i++)
    {
        if(numero[i] % 2 == 0)
        {
            printf("numero %d na posicao %d\n", numero[i], i);
            par += numero[i];
        }
    }
    printf("Soma dos pares = %d\n", par);

    printf("Numero impar:\n");
    for(i = 1; i < 11; i++)
    {
        if(numero[i] % 2 != 0)
        {
            printf("numero %d na posicao %d\n", numero[i], i);
            impar++;
        }
    }
    printf("Quantidade de impares = %d\n", impar);


        if(par == 0)
        {
          printf("Nenhum numero par digitado\n");
          return 0;
        }
        else if(impar == 0)
        {
          printf("Nenhum numero impar digitado\n");
          return 0;
        }


    return 0;
}
