#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
    case 'r':printf("RED");
    break;

    case 'y':printf("YELLOW");
    break;

    case 'g':printf("GREEN");
     break;

    default:printf("Invalid Option");
     break;
                }

                                         return 0;
}
