#include<stdio.h>
typedef struct student{
 char name[100];
 int id;
}stu;
int main()
{
    FILE *fp;
    stu s;
    int word=0;
    char ch;
     fp=fopen("drive.txt","r");
    ch=fgetc(fp);
     while(!feof(fp))
     {
         if(ch=='\n')
         word++;
         ch=fgetc(fp);
    }
    printf("%d",word);
     fclose(fp);
}
