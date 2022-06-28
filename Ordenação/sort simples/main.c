/* 

Leia 3 valores inteiros e ordene-os em ordem crescente.
 No final, mostre os valores em ordem crescente, uma linha em branco e em seguida,
  os valores na sequência como foram lidos.
Entrada

A entrada contem três números inteiros.
Saída

Imprima a saída conforme foi especificado.
*/

#include <stdio.h>

int main() {
   int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a<b && b<c)
    {
        printf("%d\n%d\n%d\n",a,b,c);
    }
    if(c<a && a<b)
    {
        printf("%d\n%d\n%d\n",c,a,b);
    }
    if(a<c && c<b)
    {
        printf("%d\n%d\n%d\n",a,c,b);
    }
    if (c<b && b<a)
    {
        printf("%d\n%d\n%d\n",c,b,a);
    }
    if(b<a && a<c)
    {
        printf("%d\n%d\n%d\n",b,a,c);
    }
    if (b<c && c<a)
    {
        printf("%d\n%d\n%d\n", b,c,a);
    }
   printf("\n%d\n%d\n%d\n",a,b,c);


    return 0;
}
