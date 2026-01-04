// Program 99 :Write a program to show memory sharing in a union.

#include <stdio.h>

union sample {
    int a;
    char b;
};

int main() {
    union sample s;

    printf("Size of union: %lu bytes\n", sizeof(s));
    s.a = 65;
    printf("a = %d\n", s.a);
    printf("b = %c\n", s.b);

    return 0;
}
