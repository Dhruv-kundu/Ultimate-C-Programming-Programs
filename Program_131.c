// Program 131 : Write a C program to print all numbers from 1 to 20, but skip multiples of 3 using continue.

#include <stdio.h>

int main() {
    for(int i = 1; i <= 20; i++) {
        if(i % 3 == 0)
            continue;
        printf("%d ", i);
    }
    return 0;
}
