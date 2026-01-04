// Program 89 :Write a program to demonstrate the use of extern storage class.
/*
Explanation
•extern is used to access a global variable defined elsewhere
•No memory allocation (only declaration)
*/
#include <stdio.h>

int x = 50;   // global variable

void display() {
    extern int x;
    printf("Value of x = %d", x);
}

int main() {
    display();
    return 0;
}
