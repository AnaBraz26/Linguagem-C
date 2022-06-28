#include <stdio.h>
#include <stdlib.h>

int main()
{
    double numeros;
    int numero = 0, casos;

    casos = 6;

     while(casos > 0)
    {
        scanf("%lf", &numeros);

        if( numeros > 0)
        {
            numero = numero + 1;
        }
        casos--;
    }
      printf("%d valores positivos\n", numero);
    return 0;
}
