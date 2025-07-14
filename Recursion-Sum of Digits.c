#include<stdio.h>
int Sumofdigits(int n)
{
  if(n==0)
  {
      return 0;
  }
  else return ((n%10)+Sumofdigits(n/10));
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("The Sum of The digit is : %d",Sumofdigits(num));
    return 0;
}
