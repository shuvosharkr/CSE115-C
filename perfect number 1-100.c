#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    primenums(m,n);
    printf("\n");
    return 0;
}
int primenums(int a, int b)
{
   for(int i=a;i<=b;i++)
    {
        if(checkprime(i))
        {
            printf("%d ",i);
        }

    }

}
int checkprime(a)
{
   int i;
   if(a==1) return 0;
   for(i=2;i<=a/2;i++)
   {
       if(a%i==0)
       {
         return 0;
       }

   }

   return 1;
}
