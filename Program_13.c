//         Program 13
// Write a program to Reverse the number entered by the user. 
#include<stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    int temp= num , rem , rev =0;
    while(temp>0){
        rem = temp%10;
        rev = (rev*10) + rem;
        temp/=10;
    } 
    printf("The reverse of the number %d is %d .",num,rev );
    return 0;
}