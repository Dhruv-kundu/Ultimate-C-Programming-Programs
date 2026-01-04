// Program 94 :Write a program to read and display details of 3 employees using an array of structures.

#include <stdio.h>

struct employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct employee e[3];

    for(int i = 0; i < 3; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        scanf("%d %s %f", &e[i].id, e[i].name, &e[i].salary);
    }

    printf("\nEmployee Details\n");
    for(int i = 0; i < 3; i++) {
        printf("ID: %d Name: %s Salary: %.2f\n",
               e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}
