#include<stdio.h>
int lcm(int a, int b)
{
    int i,gcd,l;
    for(i=1; i<=a&&i<=b; i++)
    {
        if(a%i==0&&b%i==0)
        {
            gcd=i;
        }
    }
    l=(a*b)/gcd;
    return l;
}
int main()
{
    int m,n,L;
    scanf("%d %d",&m,&n);
    L=lcm(m,n);
    printf("%d",L);
    return 0;
}
