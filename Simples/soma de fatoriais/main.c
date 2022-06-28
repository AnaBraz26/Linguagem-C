/*

Leia dois valores inteiros M e N indefinidamente. A cada leitura, calcule e 
escreva a soma dos fatoriais de cada um dos valores lidos. Utilize uma variável apropriada, 
pois cálculo pode resultar em um valor com mais de 15 dígitos.
Entrada

O arquivo de entrada contém vários casos de teste. Cada caso contém dois números inteiros
 M (0 ≤ M ≤ 20) e N (0 ≤ N ≤ 20). O fim da entrada é determinado por eof.
Saída

Para cada caso de teste de entrada, seu programa deve imprimir uma única linha, contendo 
um número que é a soma de ambos os fatoriais (de M e N).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
     unsigned long long int x, y, soma, vezesx, vezesy;
    while (scanf("%llu%llu", &x, &y) != EOF)
    {
       for(vezesx = 1; x > 1; --x)
       {
           vezesx = vezesx * x;

       }
       for(vezesy = 1; y > 1; --y)
       {
           vezesy = vezesy * y;

       }

      soma = vezesx + vezesy;

      printf("%llu\n", soma);

    }
    return 0;
}
