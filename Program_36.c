// Program 36: Write a program to print a star pattern using nested loops.

// *
// ***
// ***** 
#include<stdio.h>

int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<= 2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
