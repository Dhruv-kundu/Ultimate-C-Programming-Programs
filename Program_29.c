// Program 29: Write a program to find the GCD of two numbers using Euclid’s algorithm (recursion).

#include <stdio.h>

int gcd(int a, int b);   // function prototype

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int first_term, second_term;

    printf("Enter the first number: ");
    scanf("%d", &first_term);

    printf("Enter the second number: ");
    scanf("%d", &second_term);

    int gcd_ofnumber = gcd(first_term, second_term);

    printf("The GCD of %d and %d is %d.", first_term, second_term, gcd_ofnumber);

    return 0;
}
