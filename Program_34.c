// Program 34: Write a program to calculate x^n using recursion.

#include<stdio.h>
int power(int , int);
int power(int num, int pow){
    if (pow==0)
        return 1;
    return num * power(num , pow-1);
}
int main(){
    int num , pow;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Enter the power :");
    scanf("%d",&pow);
    printf("The value of %d^%d is %d.",num,pow,power(num,pow));
    return 0;
}
