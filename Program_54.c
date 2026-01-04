// Program 54: Write a program to add two matrices with user-defined rows and columns.
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
    int matrix1[row1][col1];
    int matrix2[row2][col2];
    for(int i = 0;i<row1;i++){
        for(int j =0 ;j<col1;j++){
            printf("Enter the element of matrix 1 at matrix[%d][%d] : ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    for(int i = 0;i<row2;i++){
        for(int j =0 ;j<col2;j++){
            printf("Enter the element of matrix 2 at matrix[%d][%d] : ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("Matrix - 1 \n");
    for(int i = 0;i<row1;i++){
        for(int j =0 ;j<col1;j++){
            printf("%d",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix - 2 \n");
    for(int i = 0;i<row2;i++){
        for(int j =0 ;j<col2;j++){
            printf("%d",matrix2[i][j]);
        }
        printf("\n");
    }
    int row , col;
    if(row1==row2 &&col1==col2){
        row = row1;
        col=col1;
    }
    else{
        printf("addition cannot be preformed.");
    }
    int matrix_sum[row][col];
    if(row1==row2 &&col1==col2){
        for(int i = 0;i<row;i++){
            for(int j =0 ;j<col;j++){
                matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        printf("matrix formed after sum :\n");
    for(int i = 0;i<row;i++){
        for(int j =0 ;j<col;j++){
            printf("%d",matrix_sum[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("operation is invalid .");
    }
    

    return 0;
}
