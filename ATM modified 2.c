#include<stdio.h>
int main()
{
 float b,l;
 int a;
 scanf("%d%f",&a,&b);
 if(a%5==0&&a<b){
    l=b-a-0.05;
    printf("%.2f",l);
 }
else{
       printf("%.2f",b);
}
    return 0;
}
