#include <stdio.h>
#include <stdlib.h>

void dec2Bin(int n)
{
    int resto, result;

    result = n/2;
    resto = n%2;

    if(result == 0)
    {
        printf("%d", resto);
    }
    else
    {
        dec2Bin(result);
        printf("%d", resto);
    }
}
int main()
{
    int n;

    scanf("%d", &n);

    dec2Bin(n);

    printf("\n");

    return 0;
}
