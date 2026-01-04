// Program 108 :Write a program to demonstrate the use of calloc() for dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    if(ptr == NULL) {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Initial values:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    free(ptr);
    return 0;
}
