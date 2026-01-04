// Program 18: Write a program to find the sum of first n natural numbers using recursion.
#include<stdio.h>

int sum_rec(int);
int sum_rec(int n){
    if (n==1)
        return 1;
    return n + sum_rec(n-1); // 3 +rec 2 =3+2+rec(1) = 3+2+1 = 6
}

int main(){
    int n ;
    printf("Enter the number of terms :");
    scanf("%d",&n);
    printf("The sum of %d natural number is %d.\n",n , sum_rec(n));    
    return 0;
}
