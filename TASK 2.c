#include<stdio.h>
int main()
{
    int a,b,sum,Pro,diff,div,rem;
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum= %d",sum);
    Pro=a*b;
    printf("\nProduct= %d",Pro);
    diff=a-b;
    printf("\nDifference= %d",diff);

    div=a/b;
    printf("\nQuotient= %d",div);

    rem=a%b;
    printf("\nRemainder= %d",rem);



    return 0;


}
