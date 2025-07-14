#include<stdio.h>
int main()
{
  int i,n;
  scanf("%d",&n);
 int count=0;
for (i=2; i<=n; i++) {

if (n%i==0) count++;

}
if (count==1) printf("Prime\n");
else printf("NOT Prime\n");
}
