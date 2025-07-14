#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define Ro 3
#define Co 3
int main() {
   int i,j,value,v=0;
    int Ta[Ro][Co];
    for(i=0;i<Ro;i++)
    {
        for (j=0;j<Co;j++)
        {
          scanf("%d",&Ta[i][j]);
        }
    }
    printf("Value :");
    scanf("%d",&value);

     for(i=0;i<Ro;i++)
    {
        for (j=0;j<Co;j++)
        {

          if(Ta[i][j]==value)
          {

              v++;
              break;
          }

        }
    }
    if(v!=0){printf("Value found");}
    else {printf("Value not found");}

    return 0;
}
