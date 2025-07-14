#include <stdio.h>
#include <stdlib.h>

typedef struct tag {
    char name[64];
    char id[20];
    float cgpa;
    char phoneno[20];
    int age;
} Student;

int main(void)
{
    FILE *fp;
    Student *slist;
    char t[10];
    int n;
    printf("Enter n(number of student data you want to read): ");
    scanf("%d",&n);
    printf("\n");
    slist = (Student *) malloc(n*sizeof(Student));
    if (slist==NULL) {
        printf("Memory Allocation failed!!!");
        return -1;
    }
    fp=fopen("input.txt","r");
    if (fp==NULL) {
        printf("File Operation Failed!!!!");
        return -1;
    }

    int i = 0,j;
    for(i=0;i<n;i++)
    {
      while (!feof(fp)) {
        fgets(slist[i].name, 60, fp);
        fgets(slist[i].id, 20, fp);
        fgets(t, 20, fp);
        slist[i].cgpa = (float) atof(t);
       printf("%s%s%f\n\n", slist[i].name, slist[i].id, slist[i].cgpa);
        i = i + 1;
    }
    }
    Student r;
    for(i=1;i<n;i++)
    {
       for(j=0;j<n-1;j++)
       {
           if(slist[i].cgpa>slist[j].cgpa)
           {
           r=slist[i];
           slist[i]=slist[j];
           slist[j]=r;
           }
       }
    }
    printf("Top Three Students: \n\n");
    for(i=0;i<3;i++)
    {
        printf("%s%s%f\n\n", slist[i].name, slist[i].id, slist[i].cgpa);
    }

    fclose(fp);

    return 0;
}
