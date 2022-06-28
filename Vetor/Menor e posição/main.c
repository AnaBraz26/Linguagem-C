#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, m , posicao = 0;
    int vetor[1000];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    m = vetor[0];

    for(i = 0; i < n; i++)
    {
        if(vetor[i] < m)
        {
            m = vetor[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", m);
    printf("Posicao: %d\n", posicao);
    return 0;
}
