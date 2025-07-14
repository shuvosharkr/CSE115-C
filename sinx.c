#include<stdio.h>
#include<math.h>
int main ()
{
    double x,a,i,j,p,k,num,den,sign,term,sum = 0;
    i=1;
    scanf("%lf", &a);
    x = (a*3.14159)/180;
    while(i<=10)
    {
        p = (2*i)-1;
        sign = pow(-1,i+1);
        num = pow(x,p);
        for(j=1,k=1;j<=p;j++)k=k*j;
        den=k;
        term = (sign*num)/den;
        sum = sum + term;
        i++;
    }
    printf("%lf",sum);
    return 0;
}
