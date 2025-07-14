#include <stdio.h>
#include<math.h>

#define pi 3.14159

double cosine(double d)
{
    double sum=1,power=1,fact=1,sign=1,term;
    double x,y;
    double i=0;
    x=(d*pi)/180.0;
    term=1;
    while (1)
    {
        i=i+2;
        fact=fact*i*(i-1);
        power=power*pow(x,2);
        term=power/fact;
        sign=sign*-1;
        y=sign*term;
        sum=sum+y;
        if(term<=0.000001)
        {
            break;
        }
    }
    return sum;
}

int main()
{
    printf("Value of cos0  = %lf\n",cosine(0));
    printf("Value of cos30 = %lf\n",cosine(30));
    printf("Value of cos45 = %lf\n",cosine(45));
    printf("Value of cos75 = %lf\n",cosine(75));
    return 0;
}
