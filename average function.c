#include<stdio.h>
float avg(float a,float b)
{
    float avg;
    avg=(a+b)/2;
    return avg;
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%.1f",avg(m,n));
    return 0;
}
