#include<stdio.h>
int main()
{
    int i,n,sum=0;
    do
    {
      scanf("%d",&n);
      if(n<0)
      {
          continue;
      }
      else if(n>0)
      {
          sum=sum+n;

      }
    }while(n!=0);
    i++;
     printf("%d",sum);
     return 0;
}

