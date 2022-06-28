#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fixo, vendas, total, total1, total2;
    char nome;

    do{
    scanf("%c", &nome);
    }
    while (nome != '\n');

    scanf("%lf\n", &fixo);
    scanf("%lf", &vendas);

    total = vendas * 1.15;
    total1 = total - vendas;
    total2 = total1 + fixo;

    printf("TOTAL = R$ %.2lf\n", total2);

    return 0;
}
