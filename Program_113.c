// Program 113 :Write a program to dynamically allocate memory for a structure and access its members.

#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll;
    float marks;
};

int main() {
    struct student *s;

    s = (struct student *)malloc(sizeof(struct student));

    if(s == NULL) {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter roll and marks: ");
    scanf("%d %f", &s->roll, &s->marks);

    printf("Roll: %d\nMarks: %.2f",
           s->roll, s->marks);

    free(s);
    return 0;
}
