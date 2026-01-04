// Program 95 :Write a program to pass a structure to a function and display its members.

#include <stdio.h>

struct book {
    int id;
    char title[30];
    float price;
};

void display(struct book b) {
    printf("ID: %d\nTitle: %s\nPrice: %.2f",
           b.id, b.title, b.price);
}

int main() {
    struct book b1 = {101, "C_Programming", 299.50};
    display(b1);
    return 0;
}
