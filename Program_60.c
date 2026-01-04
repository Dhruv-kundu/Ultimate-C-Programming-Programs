// Program 60: Write a program to check whether a string is a palindrome using recursion.
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    if (start >= end)
        return 1;

    if (str[start] != str[end])
        return 0;

    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);   // reads word without spaces

    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");

    return 0;
}
