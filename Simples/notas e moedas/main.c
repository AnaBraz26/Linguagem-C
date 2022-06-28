/*

Leia um valor de ponto flutuante com duas casas decimais. 
Este valor representa um valor monetário. A seguir, calcule o 
menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2. 
As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01.
 A seguir mostre a relação de notas necessárias.
Entrada

O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).
Saída

Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
*/

#include <stdio.h>

int main() {
 int novo,cem,cinquenta, vinte, dez, cinco, dois, um, cinqcent, vintcincent, dezcent, cincent, umcent;
    double valor;
    scanf("%lf", &valor);
    novo = valor*100;

    cem = novo/10000;

    cinquenta = novo%10000/5000;

    vinte =  novo%10000%5000/2000;

    dez = novo%10000%5000%2000/1000;

    cinco = novo%10000%5000%2000%1000/500;

    dois = novo%10000%5000%2000%1000%500/200;

    um = novo%10000%5000%2000%1000%500%200/100;

    cinqcent = novo%10000%5000%2000%1000%500%200%100/50;

    vintcincent = novo%10000%5000%2000%1000%500%200%100%50/25;

    dezcent = novo%10000%5000%2000%1000%500%200%100%50%25/10;

    cincent = novo%10000%5000%2000%1000%500%200%100%50%25%10/5;

    umcent = novo%10000%5000%2000%1000%500%200%100%50%25%10%5;



    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", cinqcent);
    printf("%d moeda(s) de R$ 0.25\n", vintcincent);
    printf("%d moeda(s) de R$ 0.10\n", dezcent);
    printf("%d moeda(s) de R$ 0.05\n", cincent);
    printf("%d moeda(s) de R$ 0.01\n", umcent);
    return 0;
}
