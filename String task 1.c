#include<stdio.h>
int main()
{
    char A[20];
    char B[20];
    gets(A);
    gets(B);
    int i=0;
    while(A[i]!='\0')
    {
        i++;
    }
    int j=0;
    while(B[j]!='0')
    {
        j++;
    }
    if(i<j)
    {
        puts(A);
    }
    else{
        puts(B);
    }
    return 0;
}
