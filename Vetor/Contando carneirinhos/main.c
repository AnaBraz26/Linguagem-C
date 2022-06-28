/*

Para dormir você resolveu contar carneirinhos. O sono está demorando muito para vir e 
você percebeu que alguns carneirinhos estão se repetindo! Cada um deles é identificado por
 um número inteiro único, desta forma você vai evitar contar os repetidos.

Dado a sequência dos carneirinhos, imprima quantos de verdade você contou, ou seja, imprima o número de carneirinhos distintos.
Entrada

Na primeira linha você terá um inteiro T (T = 100*) indicando o número de casos de teste.

Na primeira linha de cada caso teremos o número inteiro N (1 ≤ N ≤ 100* ou 1 ≤ N ≤ 104​**), 
indicando o número de carneirinhos. Na próxima linha teremos N inteiros separados por espaço indicando a
 sequência de carneirinhos.

Os identificadores dos carneiros irão de 0 até 109, inclusive.

*Ocorre em aproximadamente 90% dos casos de teste;

**Ocorre nos demais casos de teste.
Saída

Imprima o número de carneirinhos distintos para cada caso.
*/

#include<stdio.h>

int selection_sort(int num[], int tam)
{
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++)
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(num[j] < num[min])
         min = j;
     }
     if (num[i] != num[min]) {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
     }
  }
  return 0;
}

int main()
{
    int teste, i;

    scanf("%d", &teste);

    for(i = 0; i < teste; i++)
    {
        int n;

        scanf("%d", &n);

        int carneiros[n], j;

        for(j = 0; j < n; j++)
        {
            scanf("%d", &carneiros[j]);
        }

       selection_sort(carneiros, n);

        int cont = 1;

        for(j = 0; j < n - 1; j++)
        {
            if(j <= (n-1) && carneiros[j] != carneiros[j+1])
            {
              ++cont;
            }
        }


        printf("%d\n", cont);
        cont = 0;
    }


return 0;
}


