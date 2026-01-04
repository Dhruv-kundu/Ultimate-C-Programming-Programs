// Program 14: Write a program to reverse a number using function.
#include<stdio.h>
int rev(int);
int rev(int n){
    int rem , rev=0 ;
    while(n>0){
        rem = n%10;
        rev =rev*10 +rem;
        n/=10;
    }
    return rev ; 
}
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("The reverse of the number %d is %d .",num,rev(num) );
    return 0;
}
