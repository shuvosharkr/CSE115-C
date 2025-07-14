#include<stdio.h>
int GCD(int a,int b)
{
    if(a!=b)
    {
        if(a>b)
        {
            return GCD(a-b,b);
        }
        else
            return GCD(a,b-a);
    }
    return a;
}

int main()
{
    int a,b,gcd;
    printf("Input 1st number: ");
    scanf("%d",&a);
    printf("Input 2nd number: ");
    scanf("%d",&b);
    gcd =GCD(a,b);
    printf("%d\n",gcd);
    return 0;
}



