#include<stdio.h>
int perfect(int a)
{
    int i,sum=0;
    for(i=1; i<a; i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==a)
    {
         return 1;
    }

    else{
        return 0;
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",perfect(num));
    return 0;
}
