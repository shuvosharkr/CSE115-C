#include<stdio.h>
int main()
{
    int choice;
    scanf("%d",&choice);
    printf("-------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t*****WELCOME TO DATA MANAGEMENT SYSTEM FOR ADMISSION*****");
    printf("\n-------------------------------------------------------------------------------------------------------");
    printf("ENTER 1-6 FOLLOWING INFORMATION GIVEN BELOW :\n");
    printf("\t 1. LOGIN\n");
    printf("\t 2. REGISTRATION\n");
    printf("\t 3. CHECK LIST OF PEOPLE WHO GOT CHANCE\n");
    printf("\t 4. CHECK LIST OF PEOPLE WHO GOT SCHOLARSHIP\n");
    printf("\t 5. SEARCH FOR A STUDENT\n");
    switch(choice)
    {
    case 1:
        login();
        break;
    case 2:
        system("CLS");
        registr();
        break;
    case 3:
        system("CLS");
        whovegotchance();
        break;
    case 4:
        system("CLS");
        whovegotscholarship();
        break;
    case 5:
        system("CLS");
        search();
        break;

    }
}
