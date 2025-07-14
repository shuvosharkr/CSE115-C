#include<stdio.h>
#include<math.h>
void swap(int *p, int *q)
{
    int X;
    X=*p;
    *p=*q;
    *q=X;

}
int main()
{
  int f,s;

  scanf("%d",&f);
  scanf("%d",&s);

  swap(&f,&s);

 printf("%d %d",f,s);
}
