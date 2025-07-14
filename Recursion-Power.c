#include<stdio.h>
int power(int a, int b)
{
   if(b==0)
   {
       return 1;
   }
  return a*power(a,b-1);
}
int main()
{
    int x,y,d;
    printf("Enter The Number : ");
    scanf("%d",&x);
    printf("Enter The power : ");
    scanf("%d",&y);
    d=power(x,y);
    printf("The Result : %d",d);
    return 0;
}
