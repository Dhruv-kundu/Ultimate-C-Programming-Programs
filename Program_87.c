// Program 87 : Write a program to demonstrate the use of register storage class
/*Explanation
•register suggests storing variable in CPU register.
•Faster access
•Address (&) cannot be used
*/
#include <stdio.h>

int main() {
    register int i;
    for(i = 1; i <= 5; i++)
        printf("%d ", i);
    return 0;
}
