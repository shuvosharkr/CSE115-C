#include<stdio.h>
typedef struct student
{
    int rno;
    char name[20];
    struct subject
    {
        int scode;
        char sname;
        int mark
    } sub[3];
    int total;
    float per;
} student;

void create()
{
    student *s;
    FILE *fp;
    int n,i,j;
    printf("Enter the Number if student : ");
    scanf("%d",&n);
    s=(student*)calloc(n,sizeof(student));
    fp=fopen("search.txt","a");
    for(i=0; i<n; i++)
    {
        s[i].total=0;
        s[i].per=0;
        printf("Enter the roll : ");
        scanf("%d",&s[i]);
        fflush(stdin);
        printf("\nEnter your name : ");
        scanf("%[^\n]s",s[i].name);
        for(j=0; j<3; j++)
        {
            printf("\nEnter your mark of sub %d : ",j+1);
            scanf("%d",&s[i].sub[j].mark);
            s[i].total += s[i].sub[j].mark;
        }
        s[i].per=s[i].total/3.0;
        fwrite(&s[i],sizeof(student),1,fp);
    }
    fclose(fp);

}
void display()
{
    student s1;
    FILE *fp;
    int j;
    fp=fopen("search.txt","r");
    while(fread(&s1,sizeof(student),1,fp))
    {
        printf("\n%-5d%-20s",s1.rno,s1.name);
        for(j=0; j<3; j++)
        {
            printf("%4d",s1.sub[j].mark);
        }
        printf("%5d%7.2f",s1.total,s1.per);
    }
    fclose(fp);
}
void append() {}

int main()
{

    int ch;
    do
    {
        printf("\n\n\n");
        printf("ENTER 1-6 FOLLOWING INFORMATION GIVEN BELOW :\n");
        printf("\t 1.create \n");
        printf("\t 2.display \n");
        printf("\t 3.append \n");
        printf("\t 0.exit \n");

        printf("Enter Your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {

        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            append();
            break;
            /*case 4:
                ();
                break;
            case 5:
                ();
                break;*/
        }
    }
    while(ch!=0);

    return 0;
}


