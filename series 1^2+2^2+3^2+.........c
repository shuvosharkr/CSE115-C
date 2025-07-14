#include<stdio.h>
int main()
{
    int i,n,sum=0,s;

    scanf("%d",&n);
    for(i=1; i<=n;i++)
    {
        s=i*i;
      sum=sum+s;

    }
    printf("%d",sum);
    return 0;

}
