#include <stdio.h>
#include <math.h>

int main()
{
    int valor, resultado, i;

    scanf("%d", &valor);

    for(i = 1; i <= valor; i++)
    {
        if(i % 2 == 0)
        {
            resultado = pow(i, 2);
            printf("%d^2 = %d\n", i, resultado);
        }
    }
   return 0;
}
