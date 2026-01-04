// Program 50: Write a program to check whether a number is prime using function.

#include<stdio.h>
int prime(int);
int prime(int n){
    int isprime = 1;
    if(n<=1){
        isprime=0;
    }
    else{
        for(int i = 2; i<n;i++){
            if(n%i==0){
                isprime=0;
                break;
            }
        }
    }
    return isprime;
}
int main(){
    int num ;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(prime(num)){
        printf("the number %d is a prime number.",num);
    }
    else{
        printf("the number %d is not a prime number.",num);
    }
    return 0;
}
