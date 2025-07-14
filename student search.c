#include<stdio.h>
#include<string.h>
typedef struct stu
{
    char name[30];
    int id;
    double scgpa;
    double hcgpa;
    double tcgpa;
    char cn[30];
} student;

void count_student()
{
    student s;
    FILE *fp;
    char ch;
    int line=0;
    fp=fopen("login.txt","r");
    while(fread(&s,sizeof(student),1,fp))
    {
        line++;
    }
    fclose(fp);
    printf("\nNUMBER OF REGISTERED STUDENTS : %d",line);
}
void chance_student()
{
    student s;
    FILE *fp;
    char ch;
    int line=0;
    fp=fopen("login.txt","r");
    while(fread(&s,sizeof(student),1,fp))
    {
        if(s.tcgpa>=9.00)

        line++;
    }
    fclose(fp);
    printf("\nNUMBER OF STUDENTS WHO GOT CHANCE: %d",line);
}
void registr()
{
    FILE *fp;
    int n,i;
    printf("\nENTER THE NUMBER OF STUDENT YOU WANT TO REGISTER: ");
    scanf("%d",&n);
    student s[n];
    fp=fopen("login.txt","a");
    for(i=0; i<n; i++)
    {
        printf("\nENTER THE ID : ");
        scanf("%d",&s[i].id);
        printf("\nEnter your name : ");
        fflush(stdin);
        gets(s[i].name);
        printf("\nEnter your SSC GPA : ");
        scanf("%lf",&s[i].scgpa);
        printf("\nEnter your HSC GPA : ");
        scanf("%lf",&s[i].hcgpa);
        s[i].tcgpa=(s[i].scgpa+s[i].hcgpa);
        printf("\nEnter your contact number : ");
        fflush(stdin);
        gets(s[i].cn);
        fwrite(&s[i],sizeof(student),1,fp);
    }
    fclose(fp);
}

void chance()
{
    student s1;
    printf("\nLIST OF STUDENTS WHO ARE ELIGIBLE TO GET ADMITTED : ");
    FILE *fp;
    fp=fopen("login.txt","r");
    printf("\n\nID   NAME\t\t SSC   HSC   TOTAL       CONTACT\n");
    while(fread(&s1,sizeof(student),1,fp))
    {
        if(s1.tcgpa>=9.00)
        {
            printf("\n%-5d%-20s",s1.id,s1.name);
            printf("%4.2f  %4.2f",s1.scgpa,s1.hcgpa);
            printf("%7.2f",s1.tcgpa);
            printf("\t%s",s1.cn);
        }
    }
    fclose(fp);
}

void scholarship()
{
    student s1;
    printf("\nLIST OF STUDENTS WHO GOT SCHOLARSHIP : ");
    FILE *fp;
    fp=fopen("login.txt","r");
    printf("\n\nID   NAME\t\t SSC   HSC   TOTAL       CONTACT\n");
    while(fread(&s1,sizeof(student),1,fp))
    {
        if(s1.tcgpa==10.00)
        {
            printf("\n%-5d%-20s",s1.id,s1.name);
            printf("%4.2f %4.2f",s1.scgpa,s1.hcgpa);
            printf("%7.2f",s1.tcgpa);
            printf("\t%s",s1.cn);
        }
    }
    fclose(fp);
}

void search()
{

    student s1;
    printf("\nENTER THE ID OF THE STUDENT :");
    int id,count=0;
    scanf("%d",&id);
    FILE *fp;
    fp=fopen("login.txt","r");
    printf("\n\nID   NAME\t\t SSC   HSC   TOTAL       CONTACT\n");
    while(fread(&s1,sizeof(student),1,fp))
    {
        if(s1.id==id)
        {
            printf("\n%-5d%-20s",s1.id,s1.name);
            printf("%4.2f %4.2f",s1.scgpa,s1.hcgpa);
            printf("%7.2f",s1.tcgpa);
            printf("\t%s",s1.cn);
            count++;
            break;
        }

    }
    if(count==0)
    {

        printf("\n\t\t************DATA NOT FOUND************");
    }
    fclose(fp);
}

void display()
{
    student s1;
    FILE *fp;
    fp=fopen("login.txt","r");
    printf("\nDISPLAYING ALL THE REGISTERED STUDENTS");
    while(fread(&s1,sizeof(student),1,fp))
    {
        printf("\n\tID : %d\nNAME:%s\n",s1.id,s1.name);
        printf("SSC GPA : %.2f\nHSC GPA : %.2f\n",s1.scgpa,s1.hcgpa);
        printf("TOTAL GPA : %.2f\n",s1.tcgpa);
        printf("CONTACT NUMBER : %s",s1.cn);
        printf("\n------------------------------------------------------------------------------------------------------------------------");
    }
    fclose(fp);
}
void login()
{
    char a[20]= "IMStudent";
    char b[208]= "IMAuthority";
    l:
    printf("\nENTER THE PASSWORD TO LOGIN : ");
    char pass[30];
    gets(pass);
    if(strcmp(pass,a)==0)
    {
        printf("\n\tStudent login successful\t\n");
        return;
    }
    else if(strcmp(pass,b)==0)
    {
        printf("\n\tAuthority login successful\t\n");
        return;
    }
    else
    {
        printf("Wrong password\n\t\t\tTry again\n");
        goto l;
    }
}

int main()
{
    int ch;
    printf("\n\n------------------------------------------------------------------------------------------------------------------------");
    printf("\t\t\t *****WELCOME TO DATA MANAGEMENT SYSTEM FOR ADMISSION*****");
    printf("\n------------------------------------------------------------------------------------------------------------------------");
    login();
    do
    {
        printf("\n\n\n");
        printf("ENTER 1-6 FOLLOWING INFORMATION GIVEN BELOW :\n");
        printf("\t 1. REGISTRATION\n");
        printf("\t 2. DISPLAY ALL THE STUDENTS WHO REGISTERED\n");
        printf("\t 3. SHOW THE NUMBER OF TOTAL REGISTERED STUDENTS\n");
        printf("\t 4. CHECK LIST OF STUDENTS WHO GOT CHANCE\n");
        printf("\t 5. SHOW THE NUMBER OF TOTAL STUDENTS WHO GOT CHANCE\n");
        printf("\t 6. CHECK LIST OF STUDENTS WHO GOT SCHOLARSHIP\n");
        printf("\t 7. SEARCH FOR A STUDENT\n");
        printf("\t 0. EXIT\n");
        printf("\nENTER YOUR CHOICE : ");
        scanf("%d",&ch);
        switch(ch)
        {

        case 1:
            registr();
            break;
        case 2:
            display();
            break;
        case 3:
           count_student();
            break;
        case 4:
            chance();
            break;
        case 5:
            chance_student();
            break;
        case 6:
            scholarship();
            break;
        case 7:
            search();
            break;
        case 0:
            printf("\n\t\t\t\t\t****THANK YOU****\n");
           return -1;
            break;
        }
    }
    while(ch!=0);
}
