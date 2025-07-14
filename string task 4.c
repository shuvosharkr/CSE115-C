#include<stdio.h>
#include<string.h>
int main()
{
    char A[190];
    char B[110];
    gets(A);
    int len=0;
    while(A[len]!='\0')
    {
        len++;
    }
    int i=0;
    int j=len-1;
    do{
      B[i]=A[j];
      j--;
      i++;
    }while(B[i]=='\0');

    int c=(strcmp(A,B));

    if(c==0)
    {
        printf("Its a palindrome");
    }
    else
    {
        printf("Its not a palindrome");
    }
}


#include <stdio.h>
#include <string.h>

int main()
{
   char A[100],Ar[100];
   gets(A);
   strcpy(Ar,A);
   strrev(Ar);
   if(strcmp(A,Ar) == 0 )
      printf("%s is a palindrome.\n", A);
   else
      printf("%s is not a palindrome.\n", Ar);

   getch();
   return 0;
}


