#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int removeR(int n, int v[MAX], int k)
{
    int aux;

    if(n == 1)
    {
        return 0;
    }
    else if(v[n] == k)
    {
        aux = v[n];
        v[n] = v[n+1];
        v[n+1] = v[n+2]++;
    }

  return removeR(n-1, v, k);
}
int main()
{
    int n;

    scanf("%d", &n);

    int i, v[n], k;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    scanf("%d", &k);

    removeR(n, v, k);

    printf("Novo vetor: ");

    for(i = 0; i < n - 1; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    printf("valor de n: %d", n-1);

    printf("\n");

    return 0;
}
