// Program 126 :Write a C program to print Pascal’s Triangle.
//      1 
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1

#include <stdio.h>

int main() {
    int n, coef = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int space = 1; space <= n - i; space++)
            printf(" ");

        coef = 1;
        for(int j = 0; j <= i; j++) {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
