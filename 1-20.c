#include<stdio.h>
int main()
{
    int a=12,b=13;
    //scanf("%d%d",&a,&b);
    int t;
    t=a;
    a=b;
    b=t;
    printf("a=%d b=%d",a,b);
}
