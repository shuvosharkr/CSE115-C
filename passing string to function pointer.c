#include<stdio.h>
int function(char *a,char c)
{
    int i=0,count=0;
    while(a[i]!='\0')
    {
        if(a[i]==c)
        {
            count++;
        }
        i++;
    }

   return count;
}

    int main()
{
    char a[]="shuvo sarkar";
    char b[100];
   char c= 'r';
    int count=function(a,c);
    printf("%d",count);
    return 0;
}
