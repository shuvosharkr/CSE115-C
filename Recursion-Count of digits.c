#include<stdio.h>

int numdigit(int a)
{
   static int count=0;
    if(a!=0)
    {
      count++ ;
      numdigit(a/10);
    }
    return count;

}
int main()
{
  int s;
  printf("Enter the num : ");
  scanf("%d",&s)  ;
  printf("Num of digits :%d ",numdigit(s))  ;
  printf("\n");
}
