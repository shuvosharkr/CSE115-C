#include<stdio.h>
int Bin(int dec)
{
    static int bin=0,rem,t=1;
    if(dec!=0)
    {
        rem=dec%2;
        bin=bin+rem*t;
        t=t*10;
        Bin(dec/2);
    }
    return bin;
}
int main()
{
    int dec;
    printf("Enter the dec Num : ");
    scanf("%d",&dec);
    printf("The bin is :%d",Bin(dec));
    return 0;
}
