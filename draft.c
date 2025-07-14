
#include<stdio.h>
#include<math.h>

double cosine(double d)
{
    double x,power;
    double sign,sum=0.0,term,den,number;
    int i=0,j,f;
    x=(d*3.14159/180.0);
    term=x;
    while(1)
    {
        power=i*2;
        sign=pow(-1,i);
        number=pow(x,power);
        for(j=1,f=1; j<=power; j++)
        {
            f=f*j;
        }
        den=f;
        term=(sign*number)/den;
        sum = sum + term;
        i++;
        if(abs(term)<=0.000001)
        {
            break;
        }
    }
    return sum;
}
int main()
{
    printf("Value of Cos0  = %lf\n",cosine(0));
    printf("Value of Cos30 = %lf\n",cosine(30));
    printf("Value of Cos45 = %lf\n",cosine(45));
    printf("Value of Cos75 = %lf\n",cosine(75));

    return 0;
}

