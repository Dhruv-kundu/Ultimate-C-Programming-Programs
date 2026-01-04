//         Program 12
// Write a program to obtain the Fibonacci series till n th term using recusion .
#include<stdio.h>
int fib_rec(int);
int fib_rec(int n ){
    if(n==0)
        return 0;
    else if(n==1)
        return 1 ; 
    return fib_rec(n-1) + fib_rec(n-2);
}
int main(){
    int no_of_terms;
    printf("Enter the number of terms: ");
    scanf("%d",&no_of_terms);
    for(int i =0 ; i< no_of_terms ; i++){
        printf("%d\n",fib_rec(i));
    }
    return 0;
}
