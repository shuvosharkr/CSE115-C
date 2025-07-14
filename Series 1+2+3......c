#include<stdio.h>
int main()
{
    int i,n,sum=0;

    scanf("%d",&n);
    for(i=1; i<=n;i=i+1)
    {
        {if(i<n)
            printf("%d+",i);
      sum=sum+i;

    }
    if(i==n) printf("%d",i);
    }
printf("\n");
    printf("%d",sum);
    return 0;

}
