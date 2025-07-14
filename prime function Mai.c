
#include <stdio.h>
int checkPrimeNumber(int n);


int main()
{
    int n1,n2,i,flag;
    scanf("%d %d",&n1,&n2);

    int count=0;
    for(i=n1; i<n2; i++)
    {
        flag=checkPrimeNumber(i);

        if(flag == 1)
        {
            count++;

        }


    }

    for(i=n1+1; i<n2; i++)
    {
        flag=checkPrimeNumber(i);
        if(count<=1 &&flag==1)
        {
            printf("%d",i);
        }
        else if(flag == 1)
        {
            printf("%d ,",i);

            count--;
        }



    }





    return 0;
}
int checkPrimeNumber(int n)
{
    int j,flag=1;
    for(j=2; j<=n/2; j++)
    {


        if(n%j == 0)
        {
            flag=0;
            break;

        }
    }
    return flag;
}
