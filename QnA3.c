#include<stdio.h>
int max(int a, int b,int c, int d,int e)
{
    if(a>b&&b>c&&c>d&&d>e)
    {
        return a;
    }
     if(b>c&&c>d&&d>e)
     {
         return b;
     }
      if(c>d&&d>e)
      {
          return c;
      }
       if(d>e)
    {
        return d;
    }
       else return e;
}
int main()
{int a,b,c,d,e;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
printf("The max value is: %d",max(a,b,c,d,e));

 return 0;
}
