#include<stdio.h>
#include<string.h>
typedef struct students
{
    char name[20];
    char id[20];
    double scgpa;
    double hcgpa;
    double fcgpa;
    char cn[20];
}stu;
 stu s[5];
 stu d[5];

void cgpa(stu a);
void search(stu a);
void sorting(stu a);
void scholarship(stu a);
void data_entry(stu a);
void select(stu a);

int main ( )
{
    int i,j,n;
    char m[20];
    char b[20];
    printf("-----------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t**** Welcome to Student Data Management System For Admission ****");
    printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf("PLEASE ENTER THE PASSWORD : ");

    gets(b);

    char a[20]="IMStudent";

    if(strcmp(a,b)==0){
            printf("\n\n!!RIGHT PASS!!\n\n");
     printf("ENTER THESE INFORMATIONS :\n");
    for(i=0;i<5;i++){
        data_entry(s[i]);
        printf("\n\n!!Next Student Please!!!\n");
    }
     for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(s[i].fcgpa<s[j].fcgpa)
            {
                d[i]=s[i];s[i]=s[j];s[j]=d[i];
            }
        }
    }
    printf("BEST 3 WHO'VE GOT CHANCE\n");
    for(i=0;i<3;i++)
    {
        select(s[i]);
        if(i==0)
        {
            scholarship(s[i]);
        }
    }
    printf("\n\t Do you want to search any students info?\n Press 1 if yes\n Press 2 for no\n");
    scanf("%d", &n);
    if(n==1)
    {
        printf("\nPLEASE ENTER THE ID OF THAT STUDENT : \n");
        scanf("%s", &m);
        for(i=0;i<5;i++)
        {
        if(strcmp(s[i].id,m)==0){
            search(s[i]);
        }
        }
    }
    printf("\n\t\t\t   **THANKS!**   \n\n\t\t\tHAVE A GOOD DAY!");
}
    else printf("Wrong pass! You are not student ");
    return 0;
}
void search(stu a)
{
    printf("Your desired students info's\n");
    printf("%s\n %s\n %.2lf\n %s\n\n", a.name, a.id,a.fcgpa,a.cn);
}
void select(stu s)
{
        printf("%s\n %s\n %.2lf\n %s\n", s.name, s.id,s.fcgpa,s.cn);

}
void data_entry(stu s)
{
        printf("Name :\n");
        scanf("\n");
        gets(s.name);
        fflush(stdin);
        printf("ID :\n");
        gets(s.id);
        fflush(stdin);
        printf("Scgpa :\n");
        scanf("%lf", &s.scgpa);
        fflush(stdin);
        printf("Hcgpa : \n");
        scanf("%lf",&s.hcgpa);
        s.fcgpa=s.scgpa + s.hcgpa;
        fflush(stdin);
        printf("Contact num :\n");
        gets(s.cn);
        fflush(stdin);
return;
}
void scholarship(stu s)
{
     printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t****STUDENT WHO GOT SCHOLARSHIP****\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n");

    printf("%s\n %s\n %.2lf\n %s\n", s.name, s.id,s.fcgpa,s.cn);

}
