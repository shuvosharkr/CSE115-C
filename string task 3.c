#include<stdio.h>
int main()
{
   char A[100];
   char B[50];
   gets(A);
   gets(B);
   int i=0;
   while(A[i]!='\0')
   {
       i++;
   }
   int j=0;
   while(B[j]!='\0')
   {
       A[i]=B[j];
       j++;
       i++;
   }
   A[i]='\0';
   puts(A);

}
