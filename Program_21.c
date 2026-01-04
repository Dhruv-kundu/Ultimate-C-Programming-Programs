// Program 21: Write a program to check whether a number is an Armstrong number using function.
#include<stdio.h>
#include<math.h>
int armstrong_sum(int);
int armstrong_sum(int num){
    int temp = num , count = 0;
    while(temp>0){
        count++;
        temp/=10;
    }
    temp=num;
    int rem , arm_s=0;
    while(temp>0){
        rem = temp%10;
        arm_s=arm_s+ pow(rem , count);
        temp/=10;
    }
    printf("%d",arm_s);
    return arm_s;
}
int main(){
    int num;
    printf("Enter The number :");
    scanf("%d",&num);
    int armstrong = armstrong_sum(num);
    if(armstrong == num){
        printf("The entered number %d is an armstrong number .",num);
    }
    else{
        printf("The entered number %d is an not armstrong number .",num);
    }
    return 0;
}
