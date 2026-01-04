// Program 19: Write a program to count the number of digits in a given number.
#include<stdio.h>

int main(){
    int num ;
    printf("Enter the number:");
    scanf("%d",&num);
    int temp=num;
    int count=0;
    while(temp>0){
        count++;
        temp/=10;
    }
    printf("the number of digit in number %d is %d.",num,count);
    return 0;
}
