#include<stdio.h>
int main(){
int n,i,j,f;
scanf("%d",&n);
for(i=1;i<=n;i++)
{ f=1;
    for(j=1;j<=i;j++)
    {

        f=f*j;

    }
     printf("F of %d is %d",i,f);
printf("\n");
}












}
