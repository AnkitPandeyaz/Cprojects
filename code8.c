// 8. Write a c program to print multiplication of 2 matrices.

#include <stdio.h>

#define N 3

void multiply(int mat1[][N], int mat2[][N], int res[][N]) {
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            res[i][j] = 0;
            for (k = 0; k < N; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int mat[][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[N][N] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    int mat2[N][N] = { { 9, 8, 7 }, { 6, 5, 4 }, { 3, 2, 1 } };
    int res[N][N];

    multiply(mat1, mat2, res);

    printf("Result of matrix multiplication:\n");
    printMatrix(res);

    return 0;
}