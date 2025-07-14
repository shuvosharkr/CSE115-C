
#include <stdio.h>


int main() {
    int a;
    float b,dif;
    scanf("%d%f",&a,&b);
    if(a<b){
        if(a%5==0){
            dif=b-a-0.5;
            printf("%.2f",dif);
        }

        else { printf("%.2f",b);}
    }
    else{
        printf("%.2f",b);
    }



    return 0;
}
