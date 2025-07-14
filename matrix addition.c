#include<stdio.h>
int main(){
  int i,j;
  int r,c,sum;
  scanf("%d%d",&r,&c);
  int A[r][c];
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          scanf("%d",&A[i][j]);
      }
  }
 /* int B[r][c];
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          scanf("%d",&B[i][j]);
      }
  }*/
   printf("\n");
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          printf("%d ",A[i][j]);
      }
      printf("\n");
  }
   printf("\n");
  /* for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          printf("%d ",B[i][j]);
      }
      printf("\n");
  }*/
   printf("\n");
  printf("Sum = ");
   printf("\n");
   for(i=0;i<r;i++)
  { sum=0;
      for(j=0;j<c;j++)
      {
         sum=sum+A[j][i];
      }
      printf("col sum %d",sum);
      printf("\n");
  }

  printf("Sum = ");
   printf("\n");
   for(i=0;i<r;i++)
  { sum=0;
      for(j=0;j<c;j++)
      {
         sum=sum+A[i][j];
      }
      printf("row sum %d",sum);
      printf("\n");
  }



}
