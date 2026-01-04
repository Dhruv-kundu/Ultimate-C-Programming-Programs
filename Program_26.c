// Program 26: Write a program to check whether a number is a perfect number.
// A perfect number is a positive integer that equals the sum of its proper divisors
#include<stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int sum = 0;
    for(int i =1 ; i<num ; i++){
        // if(num == (num * i)){
        if(num%i==0){
            sum +=i;
        }
    }
    if(sum == num)
        printf("The entered number %d is a perfect number .",num);
    else
        printf("The entered number %d is not a perfect number .",num);
    return 0;
}
