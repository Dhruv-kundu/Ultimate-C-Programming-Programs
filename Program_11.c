//         Program 11
// Write a program to obtain the Fibonacci series till n th term using function.
#include<stdio.h>
int fib(int );
int fib(int n){
    int a = 0 , b= 1,next ;
    for(int i =0 ; i<n ; i++){
        printf("%d\n",a);
        next=a+b;
        a=b;
        b=next;
    } 
    return 0;
}
int main(){
    int no_of_terms;
    printf("Enter the number of terms: ");
    scanf("%d",&no_of_terms);
    fib(no_of_terms);
    return 0;
}
