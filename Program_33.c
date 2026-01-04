// Program 33: Write a program to find the transpose of a 2×2 matrix.

#include<stdio.h>

int main(){
    int matrix[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("enter the element at arr[%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Method 1 of represention matrix.\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("Method 2 of represention matrix.\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("element at matrix[%d][%d] is %d .\n",i,j,matrix[i][j]);
        }
    }
    printf("Transpose of the matrix \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
