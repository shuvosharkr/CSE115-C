#include<stdio.h>
int LY(int year)
{
    if(year%4==0&&(year%100!=0||year%400==0))
        return 1;
    else return 0;
}
int main()
{
    int year,a;
    scanf("%d",&year);
    a=LY(year);
    printf("%d",a);
    return 0;
}
