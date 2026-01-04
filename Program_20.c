// Program 20: Write a program to check whether a number is an Armstrong number.
#include<stdio.h>
#include<math.h>
int main(){
    int num ;
    printf("Enter the number:");
    scanf("%d",&num);
    int temp=num;
    int count = 0;
    while(temp>0){
        count++;
        temp/=10;
    }
    temp=num;
    int rem ,  armstrong_sum=0;
    while(temp>0){
        rem = temp%10;
        armstrong_sum = armstrong_sum + pow(rem , count);
        temp/=10;
    }
    if(armstrong_sum == num){
        printf("The entered number %d is an armstrong number .",num);
    }
    else{
        printf("The entered number %d is an not armstrong number .",num);
    }
    return 0;
}
