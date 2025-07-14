#include<stdio.h>
int main()
{
 int a,m,sum,num;
 scanf("%d",&a);
 do{
     m=a%10;
     sum=sum+m;
    printf("%d",m);


    a=a/10;
 }while(a!=0);

 return 0;
}
