// Program 111 :Write a program to resize a dynamically allocated array using realloc()

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n1, n2;

    printf("Enter initial size: ");
    scanf("%d", &n1);

    arr = (int *)malloc(n1 * sizeof(int));

    for(int i = 0; i < n1; i++)
        arr[i] = i + 1;

    printf("Enter new size: ");
    scanf("%d", &n2);

    arr = (int *)realloc(arr, n2 * sizeof(int));

    printf("Array elements:\n");
    for(int i = 0; i < n2; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
