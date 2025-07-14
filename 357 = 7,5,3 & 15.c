#include<stdio.h>
int main()
{
   int i,r1,r2,r3,d1,d2,a,sum,num;
   scanf("%d",&a);

       r1=a%10;
       d1=a/10;
       r2=d1%10;
       d2=d1/10;
       r3=d2%10;
       sum=r1+r2+r3;
       num=(r1*100+r2*10+r3);
   printf("%d and sum=%d",num,sum);
   return 0;
}
