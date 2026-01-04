// Program 39: Write a program to print a character pattern using nested loops.

// A
// B c
// D E F 
// G H I J
#include<stdio.h>

int main(){
    char ch='A';
    for(int i = 1 ; i<=4 ; i++){
        for(int j = 1 ; j<=i ; j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
