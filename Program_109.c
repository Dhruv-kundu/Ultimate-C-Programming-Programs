// Program 109 :Write a program to find the sum of dynamically allocated array elements.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d", sum);

    free(arr);
    return 0;
}
