#include<stdio.h>
int countfreq(char *s,char c)
{
    int count=0,i=0;
    while(s[i]!='\0')
    {
        if(s[i]==c)
        {
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    char s[30]="madam";
    char c = 'a';
    int b = countfreq(&s,c);
    printf("%d",b);
}
