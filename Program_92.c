// Program 92 :Write a program to show lifetime of a static variable.
/*Explanation
•Static variable is initialized only once
•Exists till program termination
*/
#include <stdio.h>

void test() {
    static int x = 10;
    x += 5;
    printf("%d\n", x);
}

int main() {
    test();
    test();
    test();
    return 0;
}
