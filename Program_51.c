// Program 51: Write a program to check whether a number is prime using recursion.
#include <stdio.h>

int isPrime(int num, int i) {
    if (num <= 1)
        return 0;
    if (i * i > num)
        return 1;
    if (num % i == 0)
        return 0;

    return isPrime(num, i + 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num, 2))
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);

    return 0;
}
