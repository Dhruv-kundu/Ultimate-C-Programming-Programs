// Program 24: Write a program to check whether a number is a palindrome using function.
#include<stdio.h>
int rev(int);
int rev(int n){
    int rem , rev=0 ;
    while(n>0){
        rem = n%10;
        rev =rev*10 +rem;
        n/=10;
    }
    return rev ; 
}
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int reverse=rev(num);
    if(reverse==num)
        printf("The number %d is palindrome.",num);
    else
        printf("The number %d is not a palindrome.",num);
    return 0;
}
