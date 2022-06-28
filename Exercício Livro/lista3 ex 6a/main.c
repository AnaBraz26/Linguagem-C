#include <stdio.h>
#include<math.h>
#define MAX 100

int main()
{
  int n, x;

  scanf("%d", &n);
  scanf("%d", &x);

  int i, v[MAX];

  for(i = 0; i < n; i++)
  {
      scanf("%d", &v[i]);
  }
  int pot, soma = 0, j;

  for(i = 0; i < n; i++)
  {
      pot = 1;

      for(j = 0; j < i; j++)
      {
         pot *= x;
      }
      soma += v[i] * pot;
  }

  printf("%d\n", soma);

  return 0;
}
