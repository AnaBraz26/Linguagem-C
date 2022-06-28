#include <stdio.h>
#include <stdlib.h>

int main()
{
    int casos, n, par = 0, impar = 0;
    scanf("%d", &casos);

    for(; casos > 0; casos--)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            par = par + 1;
        }
        else
        {
           impar = impar + 1;
        }
    }
    printf("%d pares\n", par);
    printf("%d impares\n", impar);


    return 0;
}
