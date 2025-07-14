#include<stdio.h>
#include<math.h>
int main ( )
{
    double a,x,p,i,j,k,sign,sum,num,den,term;
    sum=0;
    i=0;
    scanf("%lf",&a);
    x=(a*3.14159)/180;
    while(i<=10)
    {
        p=i*2;
        sign=pow(-1,i);
        num =pow(x,p);
        for(j=1,k=1;j<=p;j++)k=k*j;
        den=k;
        term = (sign*num)/den;
        sum = sum + term;
        i++;
    }
    printf("%lf", sum);
    return 0;
}
