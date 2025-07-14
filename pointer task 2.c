#include<stdio.h>
#include<math.h>
void arraySum(int *pA, int *pB, int sizeA, int sizeB)
{
    int i,sum=0;
    for(i=0; i<sizeA; i++)
    {
        sum=sum+*(pA+i);

    }
    for(i=0; i<sizeB; i++)
    {

        sum=sum+*(pB+i);
    }

    printf("%d",sum);


}

int main()
{
    int S1,S2;

    scanf("%d",&S1);

    int A[S1];
    int i;
    for(i=0; i<S1; i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d",&S2);

    int B[S2];
    for(i=0; i<S2; i++)
    {
        scanf("%d",&B[i]);
    }
    arraySum(A,B,S1,S2);
}
