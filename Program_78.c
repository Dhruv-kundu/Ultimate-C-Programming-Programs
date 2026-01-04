// Program 78: Write a program to write integers and characters into a file.

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("data0.txt","w");
    if(ptr == NULL) {
        printf("File cannot be opened");
        return 0;
    }
    for(int i = 0;i<=100;i++){
        fprintf(ptr,"%d \n",i);
    }
    fprintf(ptr,"\n\n");
    char ch='A';
    for(int i = 0;i<=25;i++){
        fprintf(ptr,"%c \n",ch);
        ch++;
    }
    fclose(ptr);
    return 0;
}

