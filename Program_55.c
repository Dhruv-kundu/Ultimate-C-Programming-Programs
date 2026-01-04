// Program 55: Write a program to perform matrix multiplication.
#include<stdio.h>

int main(){
    int row1,row2,col1,col2;
    printf("Enter the number of row for matrix 1 : ");
    scanf("%d",&row1);
    printf("Enter the number of row for matrix 2 : ");
    scanf("%d",&row2);
    printf("Enter the number of col for matrix 1 : ");
    scanf("%d",&col1);
    printf("Enter the number of col for matrix 2 : ");
    scanf("%d",&col2);
    // Check condition
    if (col1 != row2) {
        printf("Matrix multiplication not possible.");
        return 0;
    }
    int matrix1[row1][col1];
    int matrix2[row2][col2];
    int result[row1][col2];

    // Input matrix 1
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("Enter matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input matrix 2
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("Enter matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    // Initialize result matrix to 0
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    // Print result matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
