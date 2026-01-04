// Program 134 : Write a C program to print a number pattern, but skip printing when row number equals column number using continue.

#include <stdio.h>

int main() {
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= 4; j++) {
            if(i == j)
                continue;
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
