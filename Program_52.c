// Program 52: Write a program to print all prime numbers from 1 to n.
#include<stdio.h>

int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    int isprime ;
    for(int i = 2 ; i<=n ; i++){
        isprime =1 ;
        for(int j = 2; j<i;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime){
            printf("%d ",i);
        }
    }
    return 0;
}
