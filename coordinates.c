#include<stdio.h>
int main()
{
  int direction,x,y,d;
char N,W,E,S;
  printf("Enter current coordinate (x and y positions):  ");
scanf("%d %d",&x,&y);
printf("\nEnter No units towards direction:");
scanf("%d",&d);

  printf("\nEnter direction:");
  scanf(" %c",&direction);

    if(direction=='N')
    {
        y=y+d;

        printf("New Coordinate:(%d,%d)",x,y);
    }

    else if(direction=='S')
    {

        y=y-d;
        printf("New Coordinate:(%d,%d)",x,y);

    }

   else if(direction=='W')
    {
       x=x+d;

        printf("New Coordinate:(%d,%d)",x,y);
    }

    else if(direction=='E')
    {
        x=x-d;

        printf("New Coordinate:(%d,%d)",x,y);
    }

return 0;
}
