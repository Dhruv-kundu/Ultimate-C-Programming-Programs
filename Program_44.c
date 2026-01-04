// Program 44: Write a program to swap two numbers without using a third variable (call by value).
#include<stdio.h>
int swap(int , int);
int swap(int first_term ,int second_term){
    first_term = first_term + second_term ;
    second_term = first_term - second_term ;
    first_term = first_term - second_term ;
    printf("After swapping (inside function), The value of first and second term are %d and %d respectively.\n", first_term,second_term);

    return 0;

}
int main(){
    int first_term , second_term ;
    printf("Enter the value of the first number:");
    scanf("%d",&first_term);
    printf("Enter the value of the Second number:");
    scanf("%d",&second_term);

    printf("Before swapping , The value of first and second term are %d and %d respectively.\n", first_term,second_term);
    swap(first_term,second_term);
    printf("After swapping (inside main), The value of first and second term are %d and %d respectively.\n", first_term,second_term);

    return 0;
}
