#include<stdio.h>
#include<math.h>
typedef struct complex
{
    float C;
    float D;
} CO;
int main()
{
    float value;
    CO x1,y1;
    scanf("%f %f",&x1.C,&x1.D);

    scanf("%f %f",&y1.C,&y1.D);

    value =(abs(x1.C-y1.C)+abs(x1.D-y1.D));

    printf("%.2f",value);
    return 0;
}
