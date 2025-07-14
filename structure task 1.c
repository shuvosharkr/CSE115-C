#include<stdio.h>

typedef struct student{
 char name[300];
 int ID;
 float CGPA;
}student;
int main()
{
    student stu[3];
    int i,min=0;
    for(i=0;i<3;i++)
    {
    scanf("\n");
   scanf("%[^\n]s",stu[i].name);
     scanf("%d",&stu[i].ID);
    scanf("%f",&stu[i].CGPA);
     fflush(stdin);
    }
    printf("-------------------------------------------\n");
    for(i=1;i<3;i++)
    {
          if(stu[i].CGPA<stu[min].CGPA)
          {
            min=i;
          }
      }
   printf("%s\n",stu[min].name);
   printf("%d\n",stu[min].ID);
   printf("%.2f\n",stu[min].CGPA);
}
