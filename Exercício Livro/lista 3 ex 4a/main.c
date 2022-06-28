#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int remover(int n, int v[MAX], int k)
{
    int i, aux = 0;


    for(i = 0; i < n; i++)
    {
        if(v[i] == k)
        {
            aux = v[i];
            v[i] = v[i+1];
            v[i+1] = v[i+2]++;

            return v[i];
        }
    }
}
int main()
{
   int n, k;

   scanf("%d", &n);

   int v[n], i;

   for(i = 0; i < n; i++)
   {
       scanf("%d", &v[i]);
   }

   scanf("%d", &k);

   remover(n, v, k);

   printf("Vetor novo: ")

    for(i = 0; i < n - 1; i++)
   {
       printf("%d ", v[i]);
   }
    printf("\n");

    printf("valor de n: %d", n-1);

    printf("\n");

    return 0;
}
