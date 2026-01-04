// Program 100 :Write a program using union inside a structure.

#include <stdio.h>

struct employee {
    int id;
    union {
        int hours;
        float salary;
    } info;
};

int main() {
    struct employee e;
    e.id = 101;
    e.info.salary = 35000.50;

    printf("ID: %d\nSalary: %.2f",
           e.id, e.info.salary);

    return 0;
}
