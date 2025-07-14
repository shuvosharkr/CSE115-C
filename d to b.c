#include <stdio.h>
#include <math.h>

int Bin(int d)
{
    int b = 0;
    int rem, t = 1;

    while (d!=0)
    {
        rem = d%2;
        d = d / 2;
        b = b + rem*t;
        t = t* 10;
    }
    return b;
}

int main()
{
    int d;
    printf("Enter a Decimal Number: ");
    scanf("%d", &d);
    printf("Equivalent Binary Number is: %d", Bin(d));
    return 0;
}
