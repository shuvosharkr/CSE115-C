#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
      for(i=1;i<=n;i++)
    {
         for(j=1;i+j<n+1;j++)
         {
            printf(" ");
         }
        for(k=1;k<=i;k++)
        {
             printf("* ");
         }

printf("\n");
        }

    for(i=n-1;i>=1;i--)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }


}
