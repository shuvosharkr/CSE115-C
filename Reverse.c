#include<stdio.h>
int main()
{
int i,j,n;
scanf("%d",&n);
    int a[n],b[n];

  for (i=0; i<n; i++)
  {
      scanf("%d",&a[i]);
  }
    for (i=0,j=n-1; i<n&&j>=0; i++,j--)
    {
        b[i]=a[j];
    }
     printf("Reversed array: ");
        for (i=0 ; i<n; i++)
        {
         printf("%d ",b[i]);
        }

}

