#include <stdio.h>
#include <stdlib.h>

int main()
{
    int funcionario, horas;
    double valor, salario;

    scanf("%d\n%d\n", &funcionario, &horas);
    scanf("%lf", &valor);

    salario = horas * valor;

    printf("NUMBER = %d\n", funcionario);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}
