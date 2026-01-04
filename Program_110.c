// Program 110 :Write a program to dynamically allocate memory for a string and display it.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str;

    str = (char *)malloc(50 * sizeof(char));

    if(str == NULL) {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter a string: ");
    scanf("%s", str);

    printf("String: %s", str);

    free(str);
    return 0;
}
