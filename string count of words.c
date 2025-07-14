#include <stdio.h>
int main()
{
char a[100];
gets(a);
int i=0,count=1;
while(a[i]!='\0')
{
    if(a[i]==' '||a[i]=='\n'||a[i]=='\t')
    {
        count++;
    }
    i++;
}
printf("There are %d words",count);
    return 0;
}
