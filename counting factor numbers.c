
#include<stdio.h>
int main()
{
  int i,n,count=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      if(n%i==0)
      {
          printf("%d\n",i);
          count++;
      }
  }
  printf("number of factors:%d",count);
}
