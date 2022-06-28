#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias;
    struct{
    int dia;
    int mes;
    int ano;
    }data1, data2;

    scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);
    scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

    if(data1.mes == data2.mes && data1.ano == data2.ano )
    {
        dias = data2.dia - data1.dia;
        printf("%d\n", dias);
    }
    else if(data1.dia == data2.dia && data1.ano == data2.ano)
    {
        dias = 30;
        printf("%d\n", dias);
    }
    else if(data1.dia == data2.dia && data1.mes == data2.mes)
    {
        dias = 360;
        printf("%d\n", dias);
    }
    else
    {
        dias = data2.dia - data1.dia;
        if(data1.mes > data2.mes)
        {

        }

    }
    return 0;
}
