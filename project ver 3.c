#include<stdio.h>
struct student
{
  char name[30];
  int id;
  double scgpa;
  double hcgpa;
  double tcgpa;
  char cn[30];
};
FILE *fp;

void registr();
void search();

int main()
{
    printf("\n\n------------------------------------------------------------------------------------------------------------------------");
    printf("\t\t\t *****WELCOME TO DATA MANAGEMENT SYSTEM FOR ADMISSION*****");
    printf("\n------------------------------------------------------------------------------------------------------------------------");
    login();
    k:
    printf("ENTER 1-6 FOLLOWING INFORMATION GIVEN BELOW :\n");
    printf("\t 1. REGISTRATION\n");
    printf("\t 2. CHECK LIST OF PEOPLE WHO GOT CHANCE\n");
    printf("\t 3. CHECK LIST OF PEOPLE WHO GOT SCHOLARSHIP\n");
    printf("\t 4. SEARCH FOR A STUDENT\n");
     int choice;
    scanf("%d",&choice);
    switch(choice)
    {

    case 1:
        registr();
        break;
    case 4:
        search();
        break;

    }
    goto k;
}
login()
{
    char a[20]= "IMStudent";
    char b[208]= "IMAuthority";
    l:
    printf("\nENTER THE PASSWORD TO LOGIN : ");
    char pass[30];
    gets(pass);
    if(strcmp(pass,a)==0)
    {
        printf("\n\tStudent login successfull\t\n");
        return;
    }
    else if(strcmp(pass,b)==0)
    {
        printf("\n\tAuthority login successfull\t\n");
        return;
    }
    else {
        printf("Wrong password\n\t\t\tTry again\n");
        goto l;
    }
}
registr()
{
    struct student s;
    char ch='y';
    fp=fopen("F:\\project\\login.txt","ab");
    if(fp==NULL)
    {
        printf("can not open");
    }
    while(ch=='y')
    {
        printf("Enter your name : \n");
        fflush(stdin);
        gets(s.name);
        printf("Enter your ID : \n");
        scanf("%d",&s.id);
        printf("Enter your SSC GPA : \n");
        scanf("%lf",&s.scgpa);
        printf("Enter your HSC GPA : \n");
        scanf("%lf",&s.hcgpa);
        printf("Enter your contact number : \n");
        fflush(stdin);
        gets(s.cn);
        fwrite(&s,sizeof(s),1,fp);
        printf("Do you want to continue? press y if YES ,n if NO\n");
        ch=getch();
    }
    printf("\nThanks for the registration\n");
    fclose(fp);
    return;
}
search()
{
    struct student s;
    char name[30],flag=0;
    fp=fopen("F:\\project\\login.txt","rb");
    if(fp==NULL)
    {
        printf("can not open\n\n");
    }
    printf("ENTER THE NAME OF THE STUDENT YOU WANT TO SEARCH : \n");
    fflush(stdin);
    gets(name);
    while(fread(&s,sizeof(s),1,fp)!=0 && flag==0)
    {
        if(s.name==name)
        {
            flag=1;
            printf("DATA found\n");
            printf("Name : %s\nID : %d\nSGPA : %lf\nHGPA : %lf\n",s.name,s.id,s.scgpa,s.hcgpa);
        }
    }
    if(flag==0)
    {
        printf("DATA not found\n");
    }
    fclose(fp);
}
