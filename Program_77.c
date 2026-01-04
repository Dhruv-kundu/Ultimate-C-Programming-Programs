//         Program 77
// Check whether two strings are anagrams of each other. first explain anagram
// Two strings are anagrams of each other if:
// They contain exactly the same characters
// The frequency of each character is the same
// Order of characters does not matter
// Example:
// "listen" and "silent" → anagrams ✅
// "triangle" and "integral" → anagrams ✅
// "apple" and "pale" → not anagrams
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 256 // total ASCII characters

int main() {
    char str1[100], str2[100];
    int count1[SIZE] = {0}, count2[SIZE] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams\n");
        return 0;
    }

    // Count frequency of each character
    for(i = 0; str1[i] != '\0'; i++) {
        count1[(int)str1[i]]++;
        count2[(int)str2[i]]++;
    }

    // Compare frequency arrays
    for(i = 0; i < SIZE; i++) {
        if(count1[i] != count2[i]) {
            printf("Strings are not anagrams\n");
            return 0;
        }
    }

    printf("Strings are anagrams\n");
    return 0;
}

