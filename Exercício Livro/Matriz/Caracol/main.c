#include <stdio.h>
int main ()
{
int i,j,n;
for(;;)
    {
    scanf("%d",&n);
    if(n==0)
        {
        return 0;
        }
    else
        {
        for(i=1;i<=n;i++)
            {
            for(j=1;j<=n;j++)
                {
                if(i<=j&&i+j<=n)
                    {
                    printf("  %d ",i);
                    }
                if(i<=j&&i+j>n)
                    {
                    if(j==n)
                        {
                        printf("  1\n");
                        }
                    else
                        {
                        printf("  %d ",n-j+1);
                        }
                    }
                if(i>j&&i+j<=n)
                    {
                    printf("  %d ",j);
                    }
                if(i>j&&i+j>n)
                    {
                    printf("  %d ",n-i+1);
                    }
                }
            }
        }
    printf("\n");
    }
}
