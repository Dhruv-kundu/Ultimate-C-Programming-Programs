//         Program 8
// Write a program to calculate the sum of digit of the number entered by the user.
#include<stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int temp = num ;
    int rem , sum=0 ;
    while(temp>0){
        rem = temp % 10 ;
        sum += rem;
        temp/=10; 
    }
    printf("The sum of the digits of the entered number %d is %d.",num , sum);
    return 0;
}