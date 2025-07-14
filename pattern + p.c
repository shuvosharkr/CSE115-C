#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2*i-1; j++)
        {
            if(i%2==0)
            {
                printf("*");
            }
            else
            {
                printf("+");
            }

        }

        printf("\n");
    }
        for(i=n; i>=1; i--)
        {
            for(j=1; j<=2*i-1; j++)
            {
                if(i%2==0)
                {
                    printf("+");
                }
                else
                {
                    printf("*");
                }

            }
            printf("\n");

        }

            return 0;
}
