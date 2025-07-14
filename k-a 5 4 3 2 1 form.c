#include <stdio.h>
void prime(int a, int b)
{
    int i,j,count=0;
    for(i=a; i<=b; i++)
    {
        for (j=2; j<i; j++)
        {
            if(i%j==0)

                count++;

        }


        if(count==0&&i!=1)

            printf("%d, ",i);




    }
}
int main()
{
    int c,d;
    scanf("%d%d",&c,&d);
    prime(c,d);


    return 0;
}
