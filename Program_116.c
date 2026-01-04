// Program 116 :Write a program to declare and initialize a self-referential structure variable

#include <stdio.h>

struct node {
    int value;
    struct node *ptr;
};

int main() {
    struct node a;

    a.value = 5;
    a.ptr = NULL;

    printf("Value = %d", a.value);
    return 0;
}
