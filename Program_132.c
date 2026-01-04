// Program 132 : Write a C program using goto to force the user to enter a positive number.
#include <stdio.h>

int main() {
    int num;

input:
    printf("Enter a positive number: ");
    scanf("%d", &num);

    if(num <= 0) {
        printf("Invalid input!\n");
        goto input;
    }

    printf("Valid number entered: %d", num);
    return 0;
}
