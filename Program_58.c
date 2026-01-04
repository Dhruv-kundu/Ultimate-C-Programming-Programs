// Program 58: Write a program to check whether a string is a palindrome without using in-built functions.
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter the string :");
    gets(str);
    puts(str);
    int strlength = strlen(str);
    int ispalindrome=1;
    for(int i =0;i<strlength;i++){
        if(str[i]!=str[strlength-i-1])
            ispalindrome=0;
    }
    if(ispalindrome){
        printf("The string is a palindrome.");
    }
    else
        printf("The string is not a palindrome.");
    return 0;
}
