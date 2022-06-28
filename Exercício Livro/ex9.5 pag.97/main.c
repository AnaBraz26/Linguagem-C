#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  n, aprovados = 0, soma = 0, reprovados = 0;
    double p1, p2, p3, mpe1, mpe;

    scanf("%d", &n);
    printf("%d estudantes\n", n);

    for(; n > 0; n--)
    {
       scanf("%lf\n %lf\n %lf", &p1, &p2, &p3);

       mpe = (p1 + p2 + p3);
       mpe1 = (double)(mpe/3);

       printf("%.2lf media do aluno\n", mpe1);

       if(mpe1 >= 5)
        {
            aprovados = aprovados + 1;
        }
        else
        {
            reprovados = reprovados + 1;
        }

    }

    printf("%d aprovados\n", aprovados);
    printf("%d reprovados\n", reprovados);

    return 0;
}
