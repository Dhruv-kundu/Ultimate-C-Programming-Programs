// Program 61: Given an array from 1 to n with one missing number, write a program to find the missing
// number.
#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n-1];
    printf("Enter %d elements (1 to %d, one missing):\n", n-1, n);

    int sum = 0;
    for (int i = 0; i < n-1; i++) {
        printf("arr[%d] : ",i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int expected_sum = n * (n + 1) / 2;
    int missing = expected_sum - sum;

    printf("Missing number is: %d", missing);

    return 0;
    return 0;
}
