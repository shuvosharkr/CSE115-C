#include<stdio.h>
int main()
{
   char X[20];
   char Y[20];
   gets(X);
   gets(Y);
   int i=0;
   while(X[i]==Y[i]&&X[i]!='\0');
   {
    i++;
   }
         if(X[i]==Y[i])
      {
        printf("Same");
      }

}
