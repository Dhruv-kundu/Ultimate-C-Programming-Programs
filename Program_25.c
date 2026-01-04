// Program 25: Write a program to check whether a number is a palindrome using recursion.
#include<stdio.h>
int rev_rec(int , int);
int rev_rec(int num , int rev){
    if (num == 0)
        return rev;
    return rev_rec(num/10 , (rev*10) + (num%10));
}
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int rev=0;
    rev=rev_rec(num , 0);
    if(rev==num)
        printf("The number %d is palindrome.",num);
    else
        printf("The number %d is not a palindrome.",num);
    return 0;
}
