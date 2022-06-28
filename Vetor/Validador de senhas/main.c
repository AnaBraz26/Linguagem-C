/*

Rolien e Naej são os desenvolvedores de um grande portal de programação. Para ajudar no novo sistema de 
cadastro do site, eles requisitaram a sua ajuda. Seu trabalho é fazer um código que valide as senhas que são 
cadastradas no portal, para isso você deve atentar aos requisitos a seguir:

    A senha deve conter, no mínimo, uma letra maiúscula, uma letra minúscula e um número;
    A mesma não pode ter nenhum caractere de pontuação, acentuação ou espaço;
    Além disso, a senha pode ter de 6 a 32 caracteres.

Entrada

A entrada contém vários casos de teste e termina com final de arquivo. 
Cada linha tem uma string S, correspondente a senha que é inserida pelo usuário no momento do cadastro.
Saída

A saída contém uma linha, que pode ser “Senha valida.”, caso a senha tenha cada
 item dos requisitos solicitados anteriormente, ou “Senha invalida.”, se um ou mais requisitos não forem atendidos.
*/

#include <stdio.h>

int main()
{
    int i, nnum, nlM, nlm, simbolos, digitos;
    char senha[1000];

    while(scanf(" %[^\n]", senha) != EOF)
    {
        nnum = 0;
        nlm = 0;
        nlM = 0;
        simbolos = 0;
        digitos = 0;

        for(i = 0; senha[i] != '\0'; i++)
        {
          if(senha[i] >= 48 && senha[i] <= 57)
          {
              nnum++;
          }
          else if(senha[i] >= 65 && senha[i] <= 90)
          {
              nlM++;
          }
          else if (senha[i] >= 97 && senha[i] <= 122)
          {
               nlm++;
          }
          else /*if(senha[i] >= 32 && senha[i] <= 47 && senha[i] >= 58 && senha[i] <= 64 && senha[i] >= 91 && senha[i] <= 96 && senha[i] >= 123 && senha[i] <= 126)*/
          {
               simbolos++;
          }

        digitos++;

        }

        if(nnum > 0 && nlM > 0 && nlm > 0 && digitos > 5 && digitos < 33 && simbolos == 0)
        {
            printf("Senha valida.\n");
        }
        else
        {
            printf("Senha invalida.\n");
        }

   }


 return 0;
}
