#include<stdio.h>
typedef struct student{
  char name[100];
  int id;
}stu;
int main()
{
  FILE *fp;
  stu s;
  fp=fopen("drive.txt","w");
  if(fp==NULL)
  {
      printf("INVALID FILE");
  }
  else{
    gets(s.name);
    scanf("%d",s.id);
    fprintf("%s %d",s.name,s.id);
  }
  fclose;
  fp=fopen("drive.txt","r");
  while(!feof(fp))
  {
      fscanf("%s %d",&s.name,&s.id);
      printf("%s %d",s.name,s.id);
  }
  fclose;
}
