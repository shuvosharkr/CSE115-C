#include<stdio.h>
#include<string.h>
typedef struct person
{
    char name[100];
    char country[30];
    int age;
    int rank;
}player;
int main ( )
{
    int i,x,y=0;
    char a[20];
    scanf("%d", &x);
    player pl[x];
    for(i=0; i<x; i++)
    {
        scanf("\n");
        gets(pl[i].name);
        fflush(stdin);
        gets(pl[i].country);
        scanf("%d",&pl[i].age);
        scanf("%d",&pl[i].rank);
        fflush(stdin);
    }
    gets(a);
    for(i=0;i<x;i++)
    {
        if(strcmp(a,pl[i].name)==0){
    printf("Name    : %s\n",pl[i].name);
    printf("Age    : %d\n",pl[i].age);
    printf("Country    : %s\n",pl[i].country);
    printf("Ranking    : %d\n",pl[i].rank);
            y=1;
            break;
        }
    }
    if(y==0)printf("Player Not Found");
return 0;
}
