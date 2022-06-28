#include <stdio.h>
/* Recebe uma data no formato dd:mm:aaaa e a atualiza em 1 dia, mostrando a nova data na saída */
int main(void)
{

struct 
{
	int dia;
	int mes;
	int ano;

} data, prox;

	printf("Informe uma data (dd/mm/aa): ");

	scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);

	prox = data;

	prox.dia++;

	if (prox.dia > 31 || (prox.dia == 31 && (prox.mes == 4 || prox.mes == 6 ||prox.mes == 9 || prox.mes == 11)) ||
	(prox.dia == 30 && prox.mes == 2) || (prox.dia == 29 && prox.mes == 2 && (prox.ano % 400 != 0 &&
	(prox.ano % 100 == 0 || prox.ano % 4 != 0)))) 
	{
		prox.dia = 1;
		prox.mes++;
		if (prox.mes > 12) 
		{
			prox.mes = 1;
			prox.ano++;
		}
	}

printf("%02d/%02d/%02d\n", prox.dia, prox.mes, prox.ano);

return 0;
}
