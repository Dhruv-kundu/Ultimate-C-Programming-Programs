// Program 86 : Write a program to demonstrate the use of auto storage class.
/*Explanation
• auto is the default storage class for local variables.
• Scope: Block
• Lifetime: Till block execution
*/
#include <stdio.h>

int main() {
    auto int x = 10;   // auto is optional
    printf("Value of x = %d", x);
    return 0;
}
