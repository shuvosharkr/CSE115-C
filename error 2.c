#include<stdio.h>
#include<math.h>
 double cosine(double d)
 {
     double x,power,sign,sum=0.0,term,den,num;
     int i=0,j,f;
     x=(d*3.14159)/180.0;
     term=x;
     while(term>=0.000001)
     {
         power=i*2;
         sign=pow(-1,i);
         num=pow(x,power);
         for(j=1,f=1;j<=power;j++)
         {
             f=f*j;
         }
         den=f;
         term=(sign*num)/den;
         sum=sum+term;
         i++;

     }
     return sum;
 }
 int main()
 {
     printf("%lf\n",cosine(0));
     printf("%lf\n",cosine(30));
     printf("%lf\n",cosine(45));
     printf("%lf\n",cosine(75));

 }
