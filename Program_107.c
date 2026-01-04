// Program 107 :Write a C program to allocate memory for n integers using malloc() and display them.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if(ptr == NULL) {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    printf("Elements are:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    free(ptr);
    return 0;
}
