#include<stdio.h>
void change(int *x)
{
    *x=9;
    printf("%d\n",x);
    return ;
}
int main()
{
    int a=5;
    change(&a);
    printf("%d\n",a);
    return 0;
}
