#include <stdio.h>
typedef struct complex {
    float A;
    float B;
} complex;

complex addition(complex c1, complex c2) {
    complex com;
    com.A = c1.A + c2.A;
    com.B = c1.B + c2.B;
    return com;
}
int main() {
    complex c1,c2,Q;
    scanf("%f %f", &c1.A, &c1.B);
    scanf("%f %f", &c2.A, &c2.B);
    Q=addition(c1, c2);
    printf("%.0f% + .0fi",Q.A,Q.B);
    return 0;
}

