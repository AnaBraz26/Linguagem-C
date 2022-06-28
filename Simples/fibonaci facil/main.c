#include <stdio.h>
#include <stdlib.h>

int main()
{
   int soma, primeiro = 0, segundo = 1, numero;

   scanf("%d", &numero);

   printf("%d %d", primeiro, segundo);
   for(;numero > 2; numero--)
   {
   soma = primeiro + segundo;
   primeiro = segundo;
   segundo = soma;
   printf(" %d", soma);
   }
   printf("\n");

   return 0;
}
