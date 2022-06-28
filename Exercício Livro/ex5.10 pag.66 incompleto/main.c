#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, aux;
    scanf("%d\n %d\n %d", &x, &y, &z);

    if(x > y && x > z && y > z)
    {
        aux = x;
        x = y;
        y = z;

        printf("%d %d %d", aux, x, y);
    }

    return 0;
}
