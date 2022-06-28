/*

Leia a hora inicial e a hora final de um jogo. 
A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia
 e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.
Entrada

A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.
Saída

Apresente a duração do jogo conforme exemplo abaixo.
*/

#include <stdio.h>

int main()
{
    int hora1,hora2, menos1, menos2;
    scanf("%d", &hora1);
    scanf("%d", &hora2);
    if (hora1>hora2)
    {
      menos1 = 24-hora1+hora2;
      printf("O JOGO DUROU %d HORA(S)\n", menos1);
    }
    if (hora2>hora1)
    {
      menos2 = hora2-hora1;
      printf("O JOGO DUROU %d HORA(S)\n", menos2);
    }
    if (hora1==hora2)
    {
      printf("O JOGO DUROU 24 HORA(S)\n");
    }

    return 0;
}
