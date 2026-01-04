// Program 22: Write a program to check whether a number is an Armstrong number using recursion.
#include<stdio.h>
#include<math.h>
int armstrong_sum_rec(int , int);
int armstrong_sum_rec(int num, int digits){
    if (num == 0)
        return 0;
    int rem = num%10;
    return pow(rem,digits) + armstrong_sum_rec(num/10,digits);
}
int main(){
    int num;
    printf("Enter The number :");
    scanf("%d",&num);
    int digits=0,temp=num;
    while(temp>0){
        digits++;
        temp/=10;
    }
    int armstrong_sum = armstrong_sum_rec(num,digits);
    if(armstrong_sum == num){
        printf("The entered number %d is an armstrong number .",num);
    }
    else{
        printf("The entered number %d is an not armstrong number .",num);
    }
    return 0;
}
