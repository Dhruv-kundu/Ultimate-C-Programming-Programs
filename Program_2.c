//            Program 2
// Write a program to calculate the factorial of any number ( Using Function ) .

#include<stdio.h>

int fact (int); //Function Prototype

int fact ( int n){ // Declaration
    int fact = 1;
    for(int i = 1 ; i <= n ; i++){
        fact *= i;
    }
    return fact ;
}
int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    printf("The factorial of the number %d is %d ." , n ,fact(n));
    return 0;
}