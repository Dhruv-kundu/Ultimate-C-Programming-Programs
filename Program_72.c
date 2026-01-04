// Program 72: Write a program to reverse a string using pointers.

Using Pointer (In-Place Reversal)
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    char *start, *end, temp;

    printf("Enter a string: ");
    scanf("%s", str);

    start = str;
    end = str + strlen(str) - 1;

    while(start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}

