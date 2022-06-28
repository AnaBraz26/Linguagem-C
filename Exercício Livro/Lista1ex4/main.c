#include <stdio.h>
#define MAX 100

void inverte(int v[], int n)
{
    if(v[MAX] >= n - 1)
    {
        return;
    }

    else
    {
        int aux = v[v[MAX]];
        v[v[MAX]] = v[n-1];
        v[n-1] = aux;

        ++v[MAX];

        return inverte(v, n-1);
    }
}

int main()
{
    int v[MAX],i, n;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    v[MAX] = 0;

    inverte(v, n);

    for(i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
