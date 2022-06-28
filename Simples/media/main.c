#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, nota1, nota2, media;
    scanf("%lf\n", &a);
    scanf("%lf", &b);

    nota1 = (double) a * 3.5;
    nota2 = (double) b * 7.5;
    media = (nota1 + nota2) / 11;

    printf("MEDIA = %.5lf", (double)media);
    return 0;
}
