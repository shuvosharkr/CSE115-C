#include<stdio.h>
int main()
{
  double b,c;
  int a;
  scanf("%d%lf",&a,&b) ;
  if(a%5==0&&a<b){
    c=b-(a+0.05);
    printf("%.2f",c);
  }
  else{
    printf("%.2f",b);
  }

    return 0;
}
