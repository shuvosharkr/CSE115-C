#include<stdio.h>
#include<math.h>
void revarr(int *Arr, int size )
{
    int i,j,B[size];
    for(i=size-1,j=0; i>=0&&j<size; i--,j++)
    {
       B[j] =*(Arr+i);
    }
    for(i=0; i<size; i++)
    {
        printf("%d ",B[i]);
    }

}
int main()
{
    int Si;
    scanf("%d",&Si);

    int Ar[Si];
    int i;
    for(i=0; i<Si; i++)
    {
        scanf("%d",&Ar[i]);
    }
    revarr(&Ar,Si);
}
