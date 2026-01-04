// Program 115 :Write a program using a generic pointer to print different data types using a function.

#include <stdio.h>

void display(void *data, char type) {
    if(type == 'i')
        printf("Integer: %d\n", *(int *)data);
    else if(type == 'f')
        printf("Float: %.2f\n", *(float *)data);
}

int main() {
    int a = 25;
    float b = 7.8;

    display(&a, 'i');
    display(&b, 'f');

    return 0;
}
