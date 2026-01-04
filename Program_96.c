// Program 96 :Write a program to use a pointer to a structure to access and modify structure members.
#include <stdio.h>

struct student {
    int roll;
    float marks;
};

int main() {
    struct student s = {1, 85.5};
    struct student *ptr = &s;

    ptr->marks = 90.0;   // modifying using pointer

    printf("Roll: %d\nMarks: %.2f",
           ptr->roll, ptr->marks);

    return 0;
}
