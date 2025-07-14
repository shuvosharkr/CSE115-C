#include<stdio.h>
int printnum(int a)
{ static int i=1,sum=0;
    if(i>a)
    {
        printf("\nSum = %d",sum);
        return 0;
    }
 printf("%d ",i) ;
 sum=sum+i;
 i++;
 printnum(a) ;
}
int main()
{
  int n;
  printf("n = ");
  scanf("%d",&n)  ;
  printnum(n);
  printf("\n");
}
