// Program 106 :Write a program using enum with switch case.

#include <stdio.h>

enum choice {ADD = 1, SUB, MUL};

int main() {
    enum choice c = MUL;
    int a = 10, b = 5;

    switch(c) {
        case ADD: printf("Sum = %d", a + b); break;
        case SUB: printf("Diff = %d", a - b); break;
        case MUL: printf("Product = %d", a * b); break;
    }
    return 0;
}
