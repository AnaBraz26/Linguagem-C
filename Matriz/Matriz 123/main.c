#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, i, j;
    int matriz[70][70];

    while(scanf("%d", &m) != EOF)
    {
        if(m % 2 == 0){
         for(i = 0; i < m; i++)
            {
               for(j = 0; j < m; j++)
                {
                   if(i == j)
                   {
                       matriz[i][j] = 1;
                   }
                   else if(i + j == m - 1)
                   {
                        matriz[i][j]= 2;
                   }
                   else
                   {
                        matriz[i][j] = 3;
                   }
                }
          }
        }
        else
        {
           for(i = 0; i < m; i++)
            {
               for(j = 0; j < m; j++)
                {
                   if(i == j)
                   {
                       matriz[i][j] = 1;
                       if(i + j == m - 1)
                       {
                           matriz[i][j] = 2;
                       }
                   }
                   else if(i + j == m - 1)
                   {
                        matriz[i][j] = 2;
                   }
                   else
                   {
                        matriz[i][j] = 3;
                   }
                }
          }
        }

        for(i = 0; i < m; i++)
         {
             for(j = 0; j < m; j++)
             {
                  printf("%d", matriz[i][j]);
             }
             printf("\n");
          }

    }

    return 0;
}
