/*úlio César usava um sistema de criptografia, 
agora conhecido como Cifra de César, que trocava cada letra 
pelo equivalente em duas posições à Esquerda no alfabeto (por exemplo, 'C' vira 'A', 'T' vira 'R', etc.).
 Ao começo do alfabeto nós voltamos para o fim, isto é 'A' vira 'Y'. Nós podemos, é claro, 
 tentar trocar as letras com quaisquer número de posições.
Entrada

A entrada contém vários casos de teste. A primeira linha de entrada contém um 
inteiro N que indica a quantidade de casos de teste. Cada caso de teste é composto 
por duas linhas. A primeira linha contém uma string com até 50 caracteres maiúsculos ('A'-'Z'),
 que é a sentença após ela ter sido codificada através desta Cifra de César modificada.
  A segunda linha contém um número que varia de 0 a 25 e que representa quantas posições 
  cada letra foi deslocada para a direita.
Saída

Para cada caso de teste de entrada, imprima uma linha de saída com o texto decodificado 
(transformado novamente para o texto original) conforme as regras acima e o exemplo abaixo.
*/

#include <stdio.h>

int main()
{
   int casos, posicoes, i, j;
   char l[51];
   char letra;

   scanf("%d", &casos);

   for(i = 0; i < casos; i++)
   {
       scanf("%s", l);
       scanf("%d", &posicoes);

       for(j = 0; l[j] != '\0'; j++)
       {
          if((l[j] - posicoes) < 65)
          {
             letra = (l[j] - posicoes) + 26;
          }
          else
          {
              letra = l[j] - posicoes;
          }
           printf("%c", letra);
        }

        printf("\n");
    }
    return 0;
}
