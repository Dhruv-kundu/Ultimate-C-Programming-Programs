// Program 79: Write a program to read a string from a file character by character.

#include<stdio.h>

int main(){
    FILE * ptr;
    ptr=fopen("data1.txt","r");
    if(ptr==NULL){
        printf("File cannot be openend");
        return 0 ;
    }
    char ch;
    while((ch=fgetc(ptr))!=EOF){
        printf("%c",ch);
    }
    fclose(ptr);
    return 0;
}
