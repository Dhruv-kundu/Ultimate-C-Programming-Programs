// Program 81: Write a program to read integers from a file.

#include<stdio.h>

int main(){
    FILE * ptr;
    ptr=fopen("data2.txt","r");
    if(ptr==NULL){
        printf("File cannot be openend");
        return 0 ;
    }
    int number;
    while (fscanf(ptr, "%d", &number) == 1) {
        printf("%d\n", number); // Process the read integer
    }
    return 0;
}

