/*Imagens no computador são feitas como matrizes de pontos, onde cada ponto tem uma 
linha e uma coluna. O número de linhas e colunas da imagem determina a resolução da mesma. 

No exercício abaixo, você vai montar uma imagem na tela usando caracteres de texto. 
Cada coordenada vai ser considerada como acesa (imprimindo um '1' na coordenada acesa) ou apagada (imprimindoa letra  'o' na coordenada apagada).

Faça um programa que leia do teclado a dimensão de uma imagem a ser criada
 (um número inteiro sem sinal). O programa deve então criar uma imagem com número de
  linhas e colunas determinados pela dimensão dada, e imprimir na tela uma imagem com um 
  'X' emoldurado,  conforme o exemplo abaixo dado para uma entrada de dimensão 15.

111111111111111
11ooooooooooo11
1o1ooooooooo1o1
1oo1ooooooo1oo1
1ooo1ooooo1ooo1
1oooo1ooo1oooo1
1ooooo1o1ooooo1
1oooooo1oooooo1
1ooooo1o1ooooo1
1oooo1ooo1oooo1
1ooo1ooooo1ooo1
1oo1ooooooo1oo1
1o1ooooooooo1o1
11ooooooooooo11
111111111111111


*/

#include <stdio.h>

int main() {
 unsigned int dimensao, l, c;
	
 scanf("%u%*c",&dimensao); // aqui lê a dimensão

 for( l=0; l < dimensao; l++) {
	for( c=0; c < dimensao; c++) {
		if((l==0) || (l == dimensao-1)|| (c == 0) || (c == dimensao-1) || 
			(c == l) || (c+l) == (dimensao - 1 )   ) 
		{
		 printf("1");
		}
		else {
		 printf("o");
		}
	}
	printf("\n"); // para mudar de linha
 }
}