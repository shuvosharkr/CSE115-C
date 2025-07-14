#include<stdio.h>
int main()
{
    char ch;
     printf("Enter the Sign= ");

    scanf("%c ",ch);
    printf(" Enter two number = ");
    int a,b;


    scanf(" %d%d",&a,&b);

    switch (ch)
    {


    case '+':
        printf("Sum = %d",a+b);
        break;
    case '-':
        printf("Difference = %d",a-b);
        break;
    default:
        printf("Error! operator is not correct");
        break;
    }

}
