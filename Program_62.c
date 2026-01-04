// Program 62: Write a program to search an element in a 2D array.
#include<stdio.h>

int main(){
    int row , col;
    printf("Enter the number of row for matrix : ");
    scanf("%d",&row);
    printf("Enter the number of col for matrix : ");
    scanf("%d",&col);
    int matrix[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int search ;
    printf("Enter the number to be search : ");
    scanf("%d",&search);
    int found = 0;

    // Search element
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] == search) {
                printf("Element found at row %d and column %d\n", i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("Element not found in the matrix.");
    }
    return 0;
}
