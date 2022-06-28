#include <stdio.h>

int main() {

  int X,Y,aux, soma;
    scanf("%d\n", &X);
    scanf("%d", &Y);
    aux = X;
    soma = 0;
     if(X > Y)
     {
      aux = Y;
       Y = X;
       X = aux;
     }

    while(aux >= X && aux <= Y){

     if(aux % 13 != 0)
     {

     soma+= aux;

     }

    ++aux;

    }


    printf("%d\n", soma);

    return 0;
}
