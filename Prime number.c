#include<stdio.h>
int main()
{
    int i,j,n,a;
    //a is the initial number
    //n is the ending number

scanf("%d %d",&a,&n);
    for(i=a; i<=n; i++)
    {
       for(j=2; j<i; j++)
        {
           if(i%j==0)
           {

               break;
           }
        }

       if(i==j)
        {
            printf("%d\nis a prime number\n",i);
        }
        else
        {
            printf("%d\nis not a prime number\n",i);
        }
    }

    return 0;
}
