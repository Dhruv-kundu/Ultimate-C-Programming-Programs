// Program 103 :Write a program using typedef with pointer.
#include <stdio.h>

typedef int* intptr;

int main() {
    int x = 10;
    intptr p = &x;

    printf("Value: %d", *p);
    return 0;
}
