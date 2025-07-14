#include<stdio.h>
int Factorial(int a)
{
    int i,f=1;
    if (a==0)
           {
        return f;
    }
    else
    {
        for(i=1;i<=a;i++)
	    {
            f=f*i;
	    }
    }
    return f;
}
int Combination(int a,int b)
{
    return Factorial(a)/(Factorial(b)*Factorial(a-b));
}
int main()
{
    int n,r,nCr;
    printf("Enter the value of n and r :\n");
    scanf("%d %d",&n,&r);
    nCr=Combination(n,r);
    printf("Combination = %d",nCr);
    return 0;
}
