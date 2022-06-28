/*

Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, 
quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.
Entrada

O arquivo de entrada contém 5 valores inteiros quaisquer.
Saída

Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.
*/

#include <stdio.h>

int main()
{

int i, a,par=0,impar=0,positivo=0,negativo=0;
i = 5;
    while ( i>0 )
   {

    scanf("%d", &a);


         if(a%2 == 0 )
        {
            par = par + 1;
        }
        else
        {
            impar = impar + 1;
        }
        if(a > 0)
        {
            positivo = positivo +1;
        }
        else if (a < 0)
        {
             negativo= negativo + 1;
        }

        i--;
    }
        printf("%d valor(es) par(es)\n", par);
        printf("%d valor(es) impar(es)\n", impar);
        printf("%d valor(es) positivo(s)\n", positivo);
        printf("%d valor(es) negativo(s)\n", negativo);
    return 0;
    }
