#include <stdio.h>

#define SIZE 5

void vectorAdd(int a[], int b[], int result[], int n) {
    for (int i = 0; i < n; i++) {
        result[i] = a[i] + b[i];
    }
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
    int result[SIZE];

    printf("Vector 1: ");
    printVector(vector1, SIZE);

    printf("Vector 2: ");
    printVector(vector2, SIZE);

    vectorAdd(vector1, vector2, result, SIZE);

    printf("Vector Sum: ");
    printVector(result, SIZE);

    return 0;
}
