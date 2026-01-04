// Program 53: Write a program to perform addition of two 2×2 matrices.
#include<stdio.h>

int main(){
    int matrix1[2][2];
    int matrix2[2][2];
    for(int i = 0;i<2;i++){
        for(int j =0 ;j<2;j++){
            printf("Enter the element of matrix 1 at matrix[%d][%d] : ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    for(int i = 0;i<2;i++){
        for(int j =0 ;j<2;j++){
            printf("Enter the element of matrix 2 at matrix[%d][%d] : ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("Matrix - 1 \n");
    for(int i = 0;i<2;i++){
        for(int j =0 ;j<2;j++){
            printf("%d",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix - 2 \n");
    for(int i = 0;i<2;i++){
        for(int j =0 ;j<2;j++){
            printf("%d",matrix2[i][j]);
        }
        printf("\n");
    }
    // row , col ==> input 
    //condition row1 ==row2 && col1==col2
    int matrix_sum[2][2];
    for(int i = 0;i<2;i++){
        for(int j =0 ;j<2;j++){
            matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("matrix formed after sum :\n");
    for(int i = 0;i<2;i++){
        for(int j =0 ;j<2;j++){
            printf("%d",matrix_sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
