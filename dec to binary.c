
#include <stdio.h>
int bin(int a)
{int p;
for(;;)
{

        p=a%2;

        return p;
}
}
int main(){
   int a,q,p;
   scanf("%d",&a);
 for(;;)
 {
     q=bin(a);
     printf("%d",q);

    if(a/2==0)
    {
        break;
    }
    p=a/2;
    a=p;

 }


 return 0;

}
