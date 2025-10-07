// Write a C Program To Read Two Matrices A (m x n) and B (p x q) and Computes the Product A and B. Read Matrix A and Matrix B in Row Major Order Respectively. Print Both The Input Matrices and Resultant Matrix With Suitable Headings and Output Should Be in Matrix Format Only. Program Must Check The Compatibility of Orders of The Matrices for Multiplication. Report Appropriate Message in Case of Incompatibility.

#include <stdio.h>
#include <stdlib.h>

void readMatrix(int **matrix, int rows, int cols, char name) {
    printf("Enter Elements of Matrix %c (%d x %d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int **matrix, int rows, int cols, char name) {
    printf("Matrix %c (%d x %d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int m, n, p, q;

    printf("Enter Number of Rows and Columns for Matrix A: ");
    scanf("%d %d", &m, &n);

    printf("Enter Number of Rows and Columns for Matrix B: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Error: Incompatible Dimensions for Multiplication (A: %d x %d, B: %d x %d)\n", m, n, p, q);
        return 1;
    }

    int **A = (int **)malloc(m * sizeof(int *));
    int **B = (int **)malloc(p * sizeof(int *));
    int **C = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        A[i] = (int *)malloc(n * sizeof(int));
        C[i] = (int *)malloc(q * sizeof(int));
    }
    for (int i = 0; i < p; i++) {
        B[i] = (int *)malloc(q * sizeof(int));
    }

    readMatrix(A, m, n, 'A');
    readMatrix(B, p, q, 'B');

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printMatrix(A, m, n, 'A');
    printMatrix(B, p, q, 'B');
    printMatrix(C, m, q, 'C');

    for (int i = 0; i < m; i++) {
        free(A[i]);
        free(C[i]);
    }

    for (int i = 0; i < p; i++) {
        free(B[i]);
    }
    free(A);
    free(B);
    free(C);
    
    return 0;
}