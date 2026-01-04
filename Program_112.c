// Program 112 :Write a program to create a dynamic 2D array using malloc().

#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    int **arr;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    arr = (int **)malloc(r * sizeof(int *));

    for(int i = 0; i < r; i++)
        arr[i] = (int *)malloc(c * sizeof(int));

    printf("Enter elements:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    printf("Matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    for(int i = 0; i < r; i++)
        free(arr[i]);
    free(arr);

    return 0;
}
