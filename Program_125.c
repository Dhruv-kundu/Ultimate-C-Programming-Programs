// Program 125 :Write a C program to convert a decimal number to binary.
#include <stdio.h>

int main() {
    int n, binary[20], i = 0;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    while(n > 0) {
        binary[i++] = n % 2;
        n = n / 2;
    }

    printf("Binary = ");
    for(int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);

    return 0;
}
