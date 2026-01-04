//         Program 10
// Write a program to obtain the Fibonacci series till n th term.
#include<stdio.h>

int main(){
    int a = 0 , b =1 , next ;
    int n ;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(int i =0 ; i<n ; i++){
        printf("%d\n",a); 
        next = a+b;  
        a=b;       
        b=next;   
    }
    return 0;
}
