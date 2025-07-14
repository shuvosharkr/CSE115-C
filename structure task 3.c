#include<stdio.h>
typedef struct complex
{
    float r;
    float i;
} complex;
complex com(complex a,complex b)
{
    scanf("%f %f",&a.r,&a.i);

    scanf("%f %f",&b.r,&b.i);
    complex r;
    r.i = a.r+b.r;
    r.r = a.i+b.i;
    return r;
}
int main()
{
    complex c1,c2,r;


    r=com(c1,c2);

    printf("%.0f% + .0fi",r.i,r.r);
    return 0;
}
