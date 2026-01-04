// Program 105 :Write a program to assign values to enumeration constants

#include <stdio.h>

enum level {LOW = 1, MEDIUM = 5, HIGH = 10};

int main() {
    printf("Low: %d\nMedium: %d\nHigh: %d",
           LOW, MEDIUM, HIGH);
    return 0;
}
