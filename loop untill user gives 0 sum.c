#include<stdio.h>
int main()
{
    int a,i,sum=0;


  do
    {
        printf("Enter a Num: ");
         scanf("%d",&a);

         if(a==0)
         {
             printf("it's a 0 so cant sum anymore....\n");
             break;
         }
         else
         {
             sum=sum+a;

         }


    }while(1);

 printf("%d\n",sum);

}
