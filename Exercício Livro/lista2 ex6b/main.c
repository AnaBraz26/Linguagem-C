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

  int pot, soma = 0;

  for(i = 0; i < n; i++)
  {
      soma = soma + v[i] * pow(x,i);
  }

  printf("%d\n", soma);

  return 0;
}
