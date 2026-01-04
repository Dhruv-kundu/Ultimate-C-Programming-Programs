//         Program 9
// Write a program to calculate the sum of digit of the number entered by the user using functions.
#include<stdio.h>

int sum_digit(int);
int sum_digit(int n){
    int rem , sum = 0 ;
    while(n>0){
        rem = n%10;
        sum+=rem;
        n/=10;
    }
    return sum ;
}
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("The sum of the digits of the entered number %d is %d.",num , sum_digit(num));

    return 0;
}