#include <stdio.h>
#include <math.h>

int main()
{
   double circulo, pi, raio, r;
   scanf("%lf", &r);

   pi = 3.14159;

   raio = pow (r, 3);

   circulo = (double)4.0/(double)3.0 * pi * raio;

   printf("VOLUME = %.3lf\n", circulo);
    return 0;
}
