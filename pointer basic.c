
#include <stdio.h>
#include<math.h>
void areaPeri(double *r)
{   float pi=3.14159;
    double pr=*r;
    double area,peri;
   area= pi*pow(pr,2);
   peri= 2*pi*pr;
   printf("%.2lf\n",area);
  printf("%.2lf",peri);
}
int main()
{
    double r;
    scanf("%lf",&r);

    areaPeri(&r);

}
