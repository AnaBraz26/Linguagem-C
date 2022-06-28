#include <stdio.h>
#define MAX 100

int main()
{
    int n, i,aux;
    struct{
        char nome[51];
        int telefone[11];
           struct{
             int d;
             int m;
             int a;
           }nascimento;
    }pessoa[MAX], kerido;

    printf("Tamanho da agenda: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
            printf("\nNome: ");
            scanf("%s", pessoa[i].nome);
            printf("\nTelefone: ");
            scanf("%d", &pessoa[i].telefone);
            printf("\nData de Nascimento: ");
            scanf("%d/%d/%d", &pessoa[i].nascimento.d, &pessoa[i].nascimento.m, &pessoa[i].nascimento.a);
    }

    //Agenda 1

    for(i = 0; i < n; i++)
    {
        if(pessoa[i].nome > pessoa[i+1].nome)
        {
            aux = pessoa[i].nome;
            pessoa[i].nome = pessoa[i+1].nome;
            pessoa[i+1].nome = aux;
        }
    }

    for(i = 0;i < n; i++){
    printf("%s  %d  %d/%d/%d", pessoa[i].nome, pessoa[i].telefone, &pessoa[i].nascimento.d,
           &pessoa[i].nascimento.m, &pessoa[i].nascimento.a);
    }


    return 0;
}
