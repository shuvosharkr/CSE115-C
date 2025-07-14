#include<stdio.h>
int factorial(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
    {
       f=f*i;
    }
    return f;
}
int main()
{
    int F,num;
    scanf("%d",&num);
    F=factorial(num);
    printf("%d",F);
    return 0;
}
