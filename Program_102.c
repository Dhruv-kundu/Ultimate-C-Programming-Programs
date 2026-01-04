// Program 102 :Write a program using typedef with structure.
#include <stdio.h>

typedef struct {
    int roll;
    float marks;
} student;

int main() {
    student s = {1, 88.5};
    printf("Roll: %d\nMarks: %.2f",
           s.roll, s.marks);
    return 0;
}
