#include<stdio.h>
int fact( int n)
{
   if(n==1) return 1;

   else return fact(n-1)+n;
}
int main()
{
    int F,n;
    scanf("%d",&n);
    F=fact(n);
    printf("%d",F);
    return 0;
}
