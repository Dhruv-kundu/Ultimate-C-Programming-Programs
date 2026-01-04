// Program 129 : Write a C program using goto to print numbers from 1 to 5.

#include <stdio.h>

int main() {
    int i = 1;

start:
    if(i <= 5) {
        printf("%d ", i);
        i++;
        goto start;
    }

    return 0;
}
