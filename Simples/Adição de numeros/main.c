#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b,c,d,e,f, multiplicacao1,multiplicacao2,multiplicacao3, adicao1, adicao2,subtracao;
 a=6;
 b=15;
 c=5;
 d=2;
 e=3;
 f=9;
 multiplicacao1=a*b;
 multiplicacao2=e*d;
 multiplicacao3=c*f;
 adicao1= multiplicacao2+multiplicacao3;
 subtracao=multiplicacao3-multiplicacao1;
 adicao2= adicao1+subtracao;
 printf("Resultado %d por %d da %d.\n", a,b,multiplicacao1);
 printf("Resultado %d por %d da %d.\n", e,d,multiplicacao2);
 printf("Resultado %d por %d da%d.\n",c,f,multiplicacao3);
 printf("Resultado de %d por %d da %d.\n",multiplicacao2,multiplicacao3,adicao1);
 printf("resultado de %d por %d da %d.\n",multiplicacao3, multiplicacao1, subtracao);
 printf("Resultado de %d por %d da %d.\n",adicao1,subtracao,adicao2);
 return 0;
}
