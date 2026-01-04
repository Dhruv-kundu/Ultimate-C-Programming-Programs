//            Program 7
//  Write a Program to check whether the input year is a leap year or not .

#include<stdio.h>

int main(){
    int year ;
    printf("Enter the year : ");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0 ) || year%400==0){
        printf("The input year %d is a leap year .",year);
    }
    else{
        printf("The input year %d is a not leap year .",year);

    }
    return 0;
}