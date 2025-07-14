#include<stdio.h>
int even_sum(int *arr,int size){
    int sum=0;
   for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    if(arr[i]%2==0){
    sum=sum+arr[i];
    }
}
return sum;
}

int main(){
    int n;
    scanf("%d",&n);
int arr[n];
printf("Sum of even number is: %d",even_sum(arr,n));
}

