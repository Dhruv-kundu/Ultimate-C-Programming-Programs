// Program 69: Write your own version of strlen() without using .
#include<stdio.h>
int strlen(char []);

int strlen(char str[]){
    int count =0;
    while(str[count]!='\0'){
        count++;
    }
    return count;
}
int main(){
    char st[]= "Dhruv kumar";
    printf("%d",strlen(st));
    return 0;
}
