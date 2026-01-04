// Program 40: Write a program to print a hollow rectangular pattern.

// *****
// *   *
// *   *
// *****
#include<stdio.h>

int main(){
    int row = 4;
    int col=5;
    for(int i = 1 ; i<=row ; i++){
        for(int j = 1 ; j<=col ; j++){
            if(i==1||i==row||j==1||j==col)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
