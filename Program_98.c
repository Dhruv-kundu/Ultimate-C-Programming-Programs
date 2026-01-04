// Program 98 :Write a C program to demonstrate the use of a union.

#include <stdio.h>

union data {
    int i;
    float f;
};

int main() {
    union data d;
    d.i = 10;
    printf("Integer value: %d\n", d.i);

    d.f = 5.5;
    printf("Float value: %.2f\n", d.f);

    return 0;
}
