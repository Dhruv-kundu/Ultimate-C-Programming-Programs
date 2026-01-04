//            Program 3
//  Write a program to calculate the factorial of any number ( Using Recursion ) .

#include<stdio.h>

int fact_rec(int);

int fact_rec( int n){
    if (n==0 || n==1 )
        return 1 ;
    return n * fact_rec(n-1);
}
int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    printf("The factorial of the number %d is %d ." , n ,fact_rec(n));

    return 0;
}