
#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    char c ='A';
      for(i=1;i<=n;i++)
    {
         for(j=1;j<=i;j++)
         {
            printf("%c ",c);
            c++;
         }

printf("\n");
        }
 for(i=n-1;i>=1;i--)
    {
         for(j=1;j<=i;j++)
         {
            printf("%c ",c);
            c++;
         }

printf("\n");
        }

}
