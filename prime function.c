#include<stdio.h>
int isPrime(int a)
{int i,count=0;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
            count=1;
        break;
    }
    if(a==1) return 0;
    else if(count==0) return 1;
    else return 0;
}
int main()
{
    int num,pr;
    scanf("%d",&num);
    pr=isPrime(num);
    if(pr==1)
    {
        printf("its a prime number");
    }
    else printf("not a prime");
    return 0;
}
