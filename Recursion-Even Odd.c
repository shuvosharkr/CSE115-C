#include<stdio.h>
int EO(int a, int b)
{
   if(a>b)
   {
       return;
   }
   printf("%d ",a);
   EO(a+2,b);
}
int main()
{
    int e;
    scanf("%d",&e);
    printf("EVEN Numbers:\n");
    EO(2,e);
    printf("\nODD Numbers:\n");
    EO(1,e);
    printf("\n");
}
