// Program 127 : Write a C program to print numbers from 1 to 10, but stop the loop when the number reaches 6 using the break statement.

#include <stdio.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        if(i == 6)
            break;
        printf("%d ", i);
    }
    return 0;
}
