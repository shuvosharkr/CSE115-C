#include<stdio.h>
int i;
int Rprime(int a)
{
  if(i==1)
  {
      return 1;
  }
  else if(a%i==0)
  {
    return 0;
  }
    else
    i=i-1;
  return Rprime(a);
}
int main()
{
  int p,O;
  printf("Enter the num : ");
  scanf("%d",&p)  ;
  i=p/2;
  O=Rprime(p);
  if(O==1)
  printf("Prime Number\n")  ;
  else printf("Not Prime");
  return 0;
}
