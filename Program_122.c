// Program 122 :Write a C program to implement a simple calculator using switch case

#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);

    switch(op) {
        case '+': printf("Sum = %d", a + b); break;
        case '-': printf("Difference = %d", a - b); break;
        case '*': printf("Product = %d", a * b); break;
        case '/': printf("Quotient = %d", a / b); break;
        default: printf("Invalid Operator");
    }

    return 0;
}
