
#include <stdio.h>
int main()
{
   int a,r=0;
   printf("Enter a number, n= ");
   scanf("%d",&a);
  do
   {
      r=r*10;
      r=r+a%10;
      a=a/10;
   } while (a!=0);
   printf("%d",r);

   return 0;
}
