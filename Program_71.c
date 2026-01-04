// Program 71: Write a program to reverse a string using array indexing.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    j = 0;

    for(i = len - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }
    // for(i=0;i<len;i++){
    //     rev[j]=str[len-i-1];
    //     j++;
    // }
    rev[j] = '\0'; // null terminate

    printf("Reversed string: %s\n", rev);
    return 0;
}

