#include <stdio.h>

#define SIZE 5

int vectorDotProduct(int a[], int b[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += a[i] * b[i];
    }
    return result;
}

void printVector(int arr[], int n) {
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main() {
    int vector1[SIZE] = {1, 2, 3, 4, 5};
    int vector2[SIZE] = {10, 20, 30, 40, 50};

    printf("Vector 1: ");
    printVector(vector1, SIZE);

    printf("Vector 2: ");
    printVector(vector2, SIZE);

    int dotProduct = vectorDotProduct(vector1, vector2, SIZE);

    printf("Dot Product: %d\n", dotProduct);

    return 0;
}
