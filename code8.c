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


// #include<stdio.h>
// #include<stdlib.h>
// int main(){
// int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
// system("cls");  //It is used to pass the commands that can be executed in the command processor or the terminal of the operating system, and finally returns the command after it has been completed
// printf("enter the number of row=");
// scanf("%d",&r);
// printf("enter the number of column=");
// scanf("%d",&c);
// printf("enter the first matrix element=\n");
// for(i=0;i<r;i++)
// {
// for(j=0;j<c;j++)
// {
// scanf("%d",&a[i][j]);
// }
// }
// printf("enter the second matrix element=\n");
// for(i=0;i<r;i++)
// {
// for(j=0;j<c;j++)
// {
// scanf("%d",&b[i][j]);
// }
// }

// printf("multiply of the matrix=\n");
// for(i=0;i<r;i++)
// {
// for(j=0;j<c;j++)
// {
// mul[i][j]=0;
// for(k=0;k<c;k++)
// {
// mul[i][j]+=a[i][k]*b[k][j];
// }
// }
// }
// //for printing result
// for(i=0;i<r;i++)
// {
// for(j=0;j<c;j++)
// {
// printf("%d\t",mul[i][j]);
// }
// printf("\n");
// }
// return 0;
// }