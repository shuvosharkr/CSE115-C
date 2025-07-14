
#include<stdio.h>


int main()
{
    int i, n,x;
    float sum=1, e=1;

    printf("Enter the value for x : ");
    scanf("%d", &x);

    printf("\nEnter the value for n : ");
    scanf("%d", &n);


    for(i=1;i<=n;i++)
    {
        e=e*x/i;
        sum=sum+e;
    }

    printf("\nThe Exponential Value of %d = %.4f", x, sum);
   return 0;
}
