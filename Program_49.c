// Program 49: Write a program to check whether a number is prime.

#include<stdio.h>

int main(){
    int num ;
    printf("Enter a number : ");
    scanf("%d",&num);
    int isprime =1 ;
    if(num<=1){
        isprime=0;
    }
    else{
        for(int i = 2 ; i<num;i++){
            if(num%i==0){
                isprime=0;
                break;
            }
        }
    }
    if(isprime){
        printf("the number %d is a prime number.",num);
    }
    else{
        printf("the number %d is not a prime number.",num);
    }
    return 0;
}
