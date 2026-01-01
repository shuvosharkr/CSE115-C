/*
 * Matrix Multiplication Program in C
 * CSE115 - Introduction to Programming
 * 
 * This program demonstrates matrix multiplication of two matrices.
 * It takes two matrices as input and produces their product.
 */

#include <stdio.h>

#define MAX_SIZE 10

void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols, char name) {
    printf("Enter elements of matrix %c (%d x %d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c[%d][%d]: ", name, i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols, char *name) {
    printf("\n%s (%d x %d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], 
                      int C[MAX_SIZE][MAX_SIZE], int rowsA, int colsA, int colsB) {
    // Initialize result matrix with zeros
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
        }
    }
    
    // Perform matrix multiplication
    // C[i][j] = sum of A[i][k] * B[k][j] for all k
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE];
    int rowsA, colsA, rowsB, colsB;
    
    printf("=== Matrix Multiplication Program ===\n\n");
    
    // Get dimensions for Matrix A
    printf("Enter dimensions of Matrix A:\n");
    printf("Number of rows: ");
    scanf("%d", &rowsA);
    printf("Number of columns: ");
    scanf("%d", &colsA);
    
    // Get dimensions for Matrix B
    printf("\nEnter dimensions of Matrix B:\n");
    printf("Number of rows: ");
    scanf("%d", &rowsB);
    printf("Number of columns: ");
    scanf("%d", &colsB);
    
    // Check if multiplication is possible
    if (colsA != rowsB) {
        printf("\nError: Matrix multiplication not possible!\n");
        printf("Number of columns in A (%d) must equal number of rows in B (%d).\n", 
               colsA, rowsB);
        return 1;
    }
    
    // Check for valid dimensions
    if (rowsA <= 0 || colsA <= 0 || rowsB <= 0 || colsB <= 0 ||
        rowsA > MAX_SIZE || colsA > MAX_SIZE || rowsB > MAX_SIZE || colsB > MAX_SIZE) {
        printf("\nError: Invalid matrix dimensions! (Must be between 1 and %d)\n", MAX_SIZE);
        return 1;
    }
    
    // Input matrices
    printf("\n");
    inputMatrix(A, rowsA, colsA, 'A');
    printf("\n");
    inputMatrix(B, rowsB, colsB, 'B');
    
    // Perform multiplication
    multiplyMatrices(A, B, C, rowsA, colsA, colsB);
    
    // Display results
    printf("\n=== Results ===");
    displayMatrix(A, rowsA, colsA, "Matrix A");
    displayMatrix(B, rowsB, colsB, "Matrix B");
    displayMatrix(C, rowsA, colsB, "Product (A x B)");
    
    printf("\n=== Matrix Multiplication Completed Successfully! ===\n");
    
    return 0;
}
