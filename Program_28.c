// Program 28: Write a program to check whether a number is a perfect number using recursion.

#include<stdio.h>
int sum_div(int,int);
int sum_div(int num , int i){
    if(i==0)
        return 0;
    if(num%i==0)
        return i+sum_div(num , i-1);
    else
        return sum_div(num,i-1);
}
int main(){
    int num ;
    printf("Enter the number : ");
    scanf("%d",&num);
    int sum_of_divisor=sum_div(num,num/2);
    if(sum_of_divisor == num)
        printf("The entered number %d is a perfect number .",num);
    else
        printf("The entered number %d is not a perfect number .",num);
    return 0;
}
