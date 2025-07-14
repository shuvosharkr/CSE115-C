#include<stdio.h>
int isPerfect(int n)
{
    int A=1,sum=0;
    while(A < n)
    {
        if(n%A==0)
            sum+=A;
        A++;
    }
    if(sum==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
    int c;
    int Ar[5]= {6,28,196,496,500};
    printf("Perfect Numbers in the array :");
    for(int i=0; i<5; i++)
    {
        int c =isPerfect(Ar[i]);
        if(c==1)
        {
            printf(" %d ",Ar[i]);
        }
    }
    printf("\n");

    return 0;
}
