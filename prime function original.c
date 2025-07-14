#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void checkPrimeNumber(int a,int b)

{
    int i,j;

    for(i=a; i<=b; i++)
    {
       for(j=2; j<i; j++)
        {

           if(i%j==0)
           {

               break;
           }
        }

       if(i==a+1)
        {
          printf("%d",i) ;

        }
        else if(i==j)
        {
            printf(", %d",i);
        }

    }



}
int main() {
int m,n;
    scanf("%d %d",&m,&n);
checkPrimeNumber(m, n);


    return 0;
}
