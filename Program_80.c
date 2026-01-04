// Program 80: Write a program to append data to an existing file.

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("data1.txt","a");
    if(ptr==NULL){
        printf("File cannot be opened.");
        return 0;
    }
    fprintf(ptr,"\nThis line is appenend.");
    fclose(ptr);
    return 0;
}
