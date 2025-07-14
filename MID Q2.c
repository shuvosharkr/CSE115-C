#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float s,sum=0;
    printf("Enter Term, n = ");
    scanf("%d",&n);
    int firstcase=1;
    i=1;
    while(i<=2*n)

    {
        if(firstcase==1)
        {
            printf("Series: %d",i);
            firstcase=0;
        }
        else
        {
            printf(" + 1/%d^%d",i,i);

        }
        s=1.0/(pow(i,i));

        sum=sum+s;

        i=i+2;
    }
    printf("\nSummation of the series: %f",sum);

    return 0;
}
