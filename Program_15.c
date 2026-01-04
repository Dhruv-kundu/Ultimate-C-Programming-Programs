// Program 15: Write a program to reverse a number using recursion.
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
    printf("The reverse of the number %d is %d .",num,rev_rec(num , rev) );
    return 0;
}
