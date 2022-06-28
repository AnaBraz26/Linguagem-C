#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int insere_R(int n, int v[MAX], int k, int x)
{
    if(k == n)
    {
        v[n] = x;

        return n + 1;
    }
    else
    {
        int aux;

        aux = v[k];

        v[k] = x;

        return insere_R(n, v, k+1, aux);
    }
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

    insere_R(n, v, k, y);

    for(i = 0; i < n + 1; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\n");

    printf("Valor de n: %d\n", n+1);

    return 0;
}
