// Program 91 :Write a program to demonstrate scope of global and local variables.
/*
Explanation
•Global variables are accessible throughout the program
•Local variables are accessible only within the function/block
*/
// #include <stdio.h>

// int x = 100;   // global variable

// int main() {
//     int x = 50;  // local variable
//     printf("Local x = %d\n", x);
//     // printf("Global x = %d\n", ::x); // ❌ not allowed in C
//     return 0;
// }

#include <stdio.h>

int x = 100;

void display() {
    printf("Global x = %d\n", x);
}

int main() {
    int x = 50;
    printf("Local x = %d\n", x);
    display();
    return 0;
}
