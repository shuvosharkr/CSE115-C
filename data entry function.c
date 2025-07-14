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
} stu;
stu s[5];
stu d[5];


void data_entry();


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

    if(strcmp(a,b)==0)
    {
        printf("\n\n!!RIGHT PASS!!\n\n");
        printf("ENTER THESE INFORMATIONS :\n");
       data_entry();
       printf("\n");
        for(i=0; i<2; i++)
        {
             printf("\n");
            puts(s[i].name);
            puts(s[i].id);
            printf("%.2lf\n",s[i].scgpa);
            printf("%.2lf\n",s[i].hcgpa);
            puts(s[i].cn);
        }


    }
    return 0;
}
    data_entry()
    {
        int i;
        for(i=0;i<2;i++)
        {
        printf("Name :\n");
        scanf("\n");
        gets(s[i].name);
        fflush(stdin);
        printf("ID :\n");
        gets(s[i].id);
        fflush(stdin);
        printf("Scgpa :\n");
        scanf("%lf", &s[i].scgpa);
        fflush(stdin);
        printf("Hcgpa : \n");
        scanf("%lf",&s[i].hcgpa);
        s[i].fcgpa=s[i].scgpa + s[i].hcgpa;
        fflush(stdin);
        printf("Contact num :\n");
        gets(s[i].cn);
        fflush(stdin);
         printf("\n");
        printf("\n\n!!Next Student Please!!!\n");
         printf("\n");
        }
    }
