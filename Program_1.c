//            Program 1
//  Write a program to calculate the factorial of any number .

#include<stdio.h>

int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    int fact = 1;
    for(int i = 1 ; i <=n ; i++){
        fact *= i;
    }
    printf("The factorial of the number %d is %d ." , n ,fact);
    return 0;
}