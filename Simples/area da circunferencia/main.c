#include <stdio.h>
#include <math.h>

int main()
{
 double raio, pi, area;
 scanf("%lf", &raio);

 pi = 3.14159;

 area = (double)pow(raio, 2) * pi;

 printf("A=%.4lf\n", area);

 return 0;
}
