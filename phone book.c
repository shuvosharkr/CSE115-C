#include<stdio.h>
int main (void)
{
    int i,j,count=0;
    int C[5];
    int D[5];
    for(i=0; i<5; i++) {
    scanf("%d", &C[i]);
    }
    for(i=0; i<5; i++) {
    scanf("%d", &D[i]);
    }
    for(i=0; i<5; i++)
    {
    if(C[i]==D[i])
    {
    count++;
    }
    else
    count=0;
    break;
    }
    if( count>0)
    printf("Strictly identical");
    else if(count==0)
    printf("Not identical");
    return 0;
}
