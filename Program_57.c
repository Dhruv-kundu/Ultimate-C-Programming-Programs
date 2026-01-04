// Program 57: Write a program to check whether a string is a palindrome using in-built functions.
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter the string :");
    gets(str);
    puts(str);

    if(str == strrev(str)){
        printf("The string is a palindrome.");
    }
    else
        printf("The string is not a palindrome.");
    return 0;
}
