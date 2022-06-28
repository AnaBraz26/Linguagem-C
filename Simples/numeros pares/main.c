#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pares;

    for (pares = 0; pares <= 100; pares = pares + 2)
    {
        if( pares != 0)
        {
            printf("%d\n", pares);
        }
    }

    return 0;
}
