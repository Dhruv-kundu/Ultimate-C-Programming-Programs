// Program 88 :Write a program to demonstrate the use of static variable inside a function.
/*
Explanation
•static retains its value between function calls
•Lifetime: Entire program
•Scope: Local
*/
#include <stdio.h>

void count() {
    static int c = 0;
    c++;
    printf("%d ", c);
}

int main() {
    count();
    count();
    count();
    return 0;
}
