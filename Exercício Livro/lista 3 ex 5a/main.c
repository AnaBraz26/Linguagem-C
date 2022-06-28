#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int insere(int n, int v[MAX], int k, int y)
{
   int  i;

   for(i = n; i > k; i--)
   {
       v[i] = v[i-1];
   }

   v[k] = y;

   return n+1;
}

int main()
{
    int n;

    scanf("%d", &n);

    int i,v[n], k, y;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    scanf("%d", &k);

    scanf("%d", &y);

    insere(n, v, k, y);

    for(i = 0; i < n + 1; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\n");

    printf("Valor de n: %d\n", n+1);

    return 0;
}
