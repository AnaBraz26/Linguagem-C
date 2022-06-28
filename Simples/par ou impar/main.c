#include <stdio.h>
#include <stdlib.h>

int main()
{
    int casos;
    long int x;

    scanf("%d", &casos);

    for(; casos > 0; casos--)
    {
        scanf("%ld", &x);

        if(x % 2 == 0 && x > 0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (x % 2 == 0 && x < 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if (x % 2 != 0 && x > 0)
        {
            printf("ODD POSITIVE\n");
        }
        else if (x % 2 != 0 && x < 0)
        {
            printf("ODD NEGATIVE\n");
        }
        else
        {
            printf("NULL\n");
        }
    }
    return 0;
}
