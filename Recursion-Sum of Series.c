#include<stdio.h>
int Sumofseries(int n,int p)//2+22+222+2222..........
{ static int i=0;
  if(i==p)
  {
      return 0;
  }
  i++;
  if(i==p)
  {
      printf("%d",n);
  }
   else printf("%d+",n);
  return (n+Sumofseries(((n*10)+2),p));
}
int main()
{
    int Snum,Enum;
    scanf("%d %d",&Snum,&Enum);
    printf("\nThe Sum of The digit is : %d",Sumofseries(Snum,Enum));
    return 0;
}

