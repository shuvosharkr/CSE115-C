#include<stdio.h>
#include<string.h>
typedef struct students
{
    char name[20];
    char id[20];
    int medium;
    double sscgpa;
    double hscgpa;
    double ograde;
    double agrade;
    double at_score;
    double fcgpa;
    char cn[20];
} stu;
stu s[5];
stu d[5];

float convert_GPA(float a, int med);
void data_entry( );
void lowtohigh( );
void whovegotchance( );
void whovegotscholarship( );
void srchstu( );


int main ( )
{
    int i,j,n,f;
    char m[20];
    char b[20];
    printf("\n\t\t\t**** Welcome to Student Data Management System For Admission ****\n\n");
    printf("Please enter the password : ");
    gets(b);
    char a[20]="IMStudent";
    if(strcmp(a,b)==0)
    {
        printf("Right pass!!!\n");
        data_entry( );

        lowtohigh( );
        printf("\t\t**Do you want to know who've got chance?**\nPress 1 if yes 2 if no.\n");
        scanf("%d",&f);
        if(f==1)whovegotchance( );

        printf("\t\t**Do you want to know who've got scholarship?**\nPress 1 if yes 2 if no.\n");
        f=0;
        scanf("%d",&f);
        if(f==1)whovegotscholarship( );
        printf("\n\t Do you want to search any student's info?\n Press 1 if yes, Press 2 for no\n");
        scanf("%d", &n);
        if(n==1)srchstu( );

        printf("\t**Thanks!**\n\tHave a good day!");
    }
    else printf("Wrong pass! You are not student ");
    return 0;
}
float convert_GPA(float a, int med)
{
    if(med==1)
    {
        return a*100/5;
    }
    else if(med==2)
    {
        return a*100/4;
    }

}
void data_entry( )
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("Enter name: ");
        scanf("\n");
        gets(s[i].name);
        fflush(stdin);
        printf("Enter student ID: ");
        gets(s[i].id);
        fflush(stdin);
        printf("Enter Admission Test score: ");
        scanf("%lf", &s[i].at_score);
        fflush(stdin);
        printf("Enter 1 for Bangla Medium Background and 2 for English Medium Background: ");
        scanf("%d", &s[i].medium);
        fflush(stdin);
        if(s[i].medium==1)
        {
            printf("Enter SSC & HSC gpa:");
            scanf("%lf %lf", &s[i].sscgpa,&s[i].hscgpa);
            s[i].fcgpa=(convert_GPA(s[i].sscgpa,s[i].medium)*5/100)+ (convert_GPA(s[i].hscgpa, s[i].medium)*10/100) + (s[i].at_score*85/100);
        }
        else if(s[i].medium==2)
        {
            printf("Enter O level & A level Grade:");
            scanf("%lf %lf", &s[i].ograde, &s[i].agrade);
            s[i].fcgpa=(convert_GPA(s[i].ograde,s[i].medium)*5/100) + (convert_GPA(s[i].agrade,s[i].medium)*10/100) + (s[i].at_score*85/100);
        }

        fflush(stdin);
        printf("Enter Contact Number:");
        gets(s[i].cn);
        fflush(stdin);
    }
}
void lowtohigh( )
{
    int i,j;
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(s[i].fcgpa<s[j].fcgpa)
            {
                d[i]=s[i];
                s[i]=s[j];
                s[j]=d[i];
            }
        }
    }
}
void whovegotchance( )
{
    int i,j;
    printf("\t\t***Best 3 who've got chance***\n");
    for(i=0; i<3; i++)
    {
        printf("Name:%s, ID:%s, Total Score:%.2lf, Contact Number:%s\n", s[i].name, s[i].id,s[i].fcgpa,s[i].cn);
    }
}
void whovegotscholarship( )
{
    printf("\t\t***Student who got scholarship***\n");
    printf("Name:%s, ID:%s, Total Score:%.2lf, Contact Number:%s\n", s[0].name, s[0].id,s[0].fcgpa,s[0].cn);
}
void srchstu( )
{
    int i,j,n;
    char m[20];
    printf("Please enter the id of that student : ");
    scanf("%s", &m);
    for(i=0; i<5; i++)
    {
        if(strcmp(s[i].id,m)==0)
        {
            printf("Your desired students info's\n");
            printf("Name:%s, ID:%s, Total score:%.2lf, Contact Number:%s\n", s[i].name, s[i].id,s[i].fcgpa,s[i].cn);
        }
    }

}
