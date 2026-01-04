// Program 27: Write a program to check whether a number is a perfect number using function.

#include<stdio.h>

int div_sum(int);
int div_sum(int n){
    int sum=0;
    for(int i = 1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int sum_divisor=div_sum(num);  
    if(sum_divisor == num)
        printf("The entered number %d is a perfect number .",num);
    else
        printf("The entered number %d is not a perfect number .",num);

    return 0;
}