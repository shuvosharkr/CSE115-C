#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef struct student
{
   char name[300];
   char pass[30];
   char id[100];
   float scgpa;
   float hcgpa;
   char cn[20];
}stu;
stu s;

Registration()
{
    int i;
    FILE *fp;
    fp=fopen("F:\\project\\login.txt","a");

    printf("name\n");
    fflush(stdin);
    gets(s.name);
    printf("pass\n");
    fflush(stdin);
    gets(s.pass);
    printf("id\n");
    fflush(stdin);
    gets(s.id);
    printf("ssc gpa\n");
    scanf("%f",&s.scgpa);
    printf("hscgpa\n");
    scanf("%f",&s.hcgpa);
    printf("contact\n");
    fflush(stdin);
    gets(s.cn);
    fflush(stdin);
    fprintf(fp,"%s %s %s %f %f %s\n",s.name,s.pass,s.id,s.scgpa,s.hcgpa,s.cn);
    fclose(fp);
    printf("\n press any key to continue");
    getch();
    system("CLS");
    login();
}
login()
{

    char name[300],pass[30];
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Enter your password : ");
    scanf("%s",&pass);
    FILE *fp;
    fp=fopen("login.txt","r");
    fscanf(fp,"%s %s %s %f %f %s",&s.name,&s.pass,&s.id,&s.scgpa,&s.hcgpa,&s.cn);
    printf("%s %s %s %f %f %s",s.name,s.pass,s.id,s.scgpa,s.hcgpa,s.cn);
    if(strcmp(pass,s.pass)==0)
    {
        printf("\n\n\t\t\t\t\Successfull login");

    }
    else {
        printf("wrong password\n Try again");
        login();
    }
    fclose(fp);
}

int main()
{
    int c;
    printf("type 1. to register ");
    printf("\ntype 2. to login ");
    printf("\nyour choice: ");
  scanf("%d",&c);
    if(c==1)
    {
        system("CLS");
        Registration();
    }
    else if(c==2)
    {
        system("CLS");
        login();
    }
}
