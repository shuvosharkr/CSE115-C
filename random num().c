#include<stdio.h>
int main()
{
  int i=1;
  while(i<=10)
  {
      int num=rand()%10+1;
      printf("%d.Random number:%d\n",i,num);
      i++;
  }

 return 0;
}
