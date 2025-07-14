#include<stdio.h>

typedef struct Person{
char name[31];
int DateOfBirth;
int mobile[12];
int NID[13];
}P;
P p[3];
void display()

{
    int i;
    for(i=0;i<3;i++)
    {
    if(age(p[i].DateOfBirth)>=40)
    {
        printf("%s\n",p[i].name);
        printf("%d\n",p[i].DateOfBirth);
        puts(p[i].mobile);
        puts(p[i].NID);

    }
    }
    return ;
}

int age(int y)
{
  int a;
  a=2021-y;
  return a;
}

int main()
{
  int i;
  for(i=0;i<3;i++)
  {
      scanf("\n");
      gets(p[i].name);
      scanf("%d",&p[i].DateOfBirth);
      scanf("\n");
      gets(p[i].mobile);
      gets(p[i].NID);

  }
  display();

  return 0;
}

