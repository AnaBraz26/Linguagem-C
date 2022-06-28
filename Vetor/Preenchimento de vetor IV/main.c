#include <stdio.h>
#include <stdlib.h>

int main()
{
    int par[5], n;
    int impar[5];
    int numero[15], i;

    for(i = 0; i < 15; i++)
    {
         scanf("%d", &numero[i]);
    }


    for(i = 0; i < 15; i++)
    {
        if(numero[i] % 2 == 0)
        {
             numero[i] = par[n];
        }
    }

    for(n = 0; n < 5; n++)
    {
        printf("par[%d] = %d\n", n, numero[i]);
    }


    for(i = 0; i < 15; i++)
    {
        if(numero[i] % 2 != 0)
        {
             numero[i] = impar[i];
             printf("impar[%d] = %d\n", i, numero[i]);
        }
    }

    return 0;
}
