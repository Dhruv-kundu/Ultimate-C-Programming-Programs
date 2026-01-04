//            Program 6
// Write a program to swap the values of two variable using XOR .

#include<stdio.h>

int main(){
    int first_term , second_term ;
    printf("Enter the value of the first number:");
    scanf("%d",&first_term);
    printf("Enter the value of the Second number:");
    scanf("%d",&second_term);

    printf("Before swapping , The value of first and second term are %d and %d respectively.\n", first_term,second_term);
    first_term = first_term ^ second_term ;
    second_term = first_term ^ second_term ;
    first_term = first_term ^ second_term ;
    printf("After swapping , The value of first and second term are %d and %d respectively.\n", first_term,second_term);

    return 0;
}