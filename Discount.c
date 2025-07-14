#include<stdio.h>
int main()
{
  double amount,discount,bill;
    printf("Enter the Purchase amount: ");
    scanf("%lf",&amount);

    if(amount>=2000&&amount<5000)
    {
       discount=(2000*4.0/100);
       bill=amount-discount;
    }

    else if(amount>=5000&&amount<=7000)
    {

        discount=(5000*8.0/100)+(2000*4.0/100);
        bill=amount-discount;

    }

    else if(amount>7000&&amount<=10000)
    {
        discount=(3000*15.0/100)+(5000*8.0/100)+(2000*4.0/100);
       bill=amount-discount;
    }
    else
    {
        discount=0;
         bill=amount-discount;
    }


printf("%.2lf",bill);
return 0;
}
