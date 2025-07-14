
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int getSquare(int c)
{
    return pow(c,2);
}
int getCube(int c)
{
    return pow(c,3);
}

int main() {
int c;
  scanf("%d",&c);
    printf("The square of the number is: %d",getSquare(c));
     printf("\nThe cube of the number is: %d",getCube(c));


    return 0;
}
