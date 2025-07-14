#include <stdio.h>
int lcm(int a,int b)
{
    static int m = 0;
    m= m+b;
    if((m%a==0)&&(m%b==0))
    {
        return m;
    }
    else
    {
        lcm(a, b);
    }
}
int main()
{
    int s,e,lcmof;
    printf("Input 1st number for LCM : ");
    scanf("%d",&s);
    printf("Input 2nd number for LCM : ");
    scanf("%d",&e);
    if(s>e)
        lcmof=lcm(e,s);
    else
        lcmof=lcm(s,e);
    printf("The LCM of %d and %d :%d",s,e,lcmof);
    return 0;
}


