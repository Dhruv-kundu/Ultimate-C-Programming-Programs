// Program 59: Write a program to check whether a string is a palindrome using a user-defined function.
#include<stdio.h>
#include<string.h>
int ispalindrome_fun(char []);
int ispalindrome_fun(char str[]){
    int strlength = strlen(str);
    int ispalindrome=1;
    for(int i =0;i<strlength;i++){
        if(str[i]!=str[strlength-i-1])
            ispalindrome=0;
    }
    return ispalindrome;
}


int main(){
    char str[50];
    printf("Enter the string :");
    gets(str);
    puts(str);
    
    if(ispalindrome_fun(str)){
        printf("The string is a palindrome.");
    }
    else
        printf("The string is not a palindrome.");
    return 0;
}
