#include <stdio.h>
#define MAX 100
/* Recebe um n�mero inteiro n e mais n n�meros inteiros
e escreve esses n�meros na ordem inversa da de leitura */
int main(void)
{
    int i, n, A[MAX];

    printf("Informe n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Informe o n�mero %d: ", i+1);
        scanf("%d", &A[i]);
    }

    printf("N�meros na ordem inversa da leitura:\n");

    for (i = n-1; i >= 0; i--)
    {
         printf("%d ", A[i]);
    }

    printf("\n");
return 0;
}
