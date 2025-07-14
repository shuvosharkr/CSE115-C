#include<stdio.h>

int sumnum(int a)
{
    if(a==1)
    {
        return 1;
    }
    return a+sumnum(a-1);

}
int main()
{
  int s;
  printf("Enter the num you want to display : ");
  scanf("%d",&s)  ;
  sumnum(s);
  printf("%d ", sumnum(s))  ;
  printf("\n");
}

