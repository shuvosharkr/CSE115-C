#include<stdio.h>
int main()
{
    int a,i,count1=0,count2=0,V;

    for(i=1; i<=15; i++)
    {
        printf("Enter the age: ");
        scanf("%d",&a);
        if(a>=18)
        {
            printf("Person will be eligible for voting\n\n");
            count1++;
        }
       else
       {
           printf("Not eligible for voting\n\n");
           count2++;

       }
    }
    printf("Num of Voters :%d\n",count1);
    V=count1+count2;
    printf("Total people :%d\n",V);











return 0;
}
