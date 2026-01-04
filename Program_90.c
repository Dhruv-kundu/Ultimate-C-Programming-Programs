// Program 90 :Write a program to show difference between static and non-static variables.
#include <stdio.h>

void demo() {
    int a = 0;         // non-static
    static int b = 0;  // static
    a++;
    b++;
    printf("a = %d, b = %d\n", a, b);
}

int main() {
    demo();
    demo();
    demo();
    return 0;
}
