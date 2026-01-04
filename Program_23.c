// Program 23: Write a program to check whether a number is a palindrome.
#include<stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    int temp= num , rem , rev =0;
    while(temp>0){
        rem = temp%10;
        rev = (rev*10) + rem;
        temp/=10;
    } 
    if(rev==num)
        printf("The number %d is palindrome.",num);
    else
        printf("The number %d is not a palindrome.",num);
    return 0;
}
