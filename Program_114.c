// Program 114 :Write a C program to demonstrate the use of a generic pointer (void *).

/*
Explanation
•void * can point to any data type
•Typecasting is required before dereferencing
*/
#include <stdio.h>

int main() {
    int x = 10;
    float y = 5.5;

    void *ptr;

    ptr = &x;
    printf("Integer value: %d\n", *(int *)ptr);

    ptr = &y;
    printf("Float value: %.2f", *(float *)ptr);

    return 0;
}
