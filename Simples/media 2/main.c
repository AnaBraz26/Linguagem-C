#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c, nota1, nota2, nota3, media;
    scanf("%lf\n", &a);
    scanf("%lf\n", &b);
    scanf("%lf", &c);

    nota1 = (double) a * 2;
    nota2 = (double) b * 3;
    nota3 = (double) c * 5;
    media = (nota1 + nota2 + nota3) / 10;

    printf("MEDIA = %.1lf", (double)media);
    return 0;
}
