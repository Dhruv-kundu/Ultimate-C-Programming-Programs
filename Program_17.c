// Program 17: Write a program to find the sum of first n natural numbers using function.
#include<stdio.h>

int sum_1(int);
int sum_1(int n){
    float a = n;
    float sum = (a*(a+1))/ 2;
    return sum;
}

int sum_2(int);
int sum_2(int n){
    int sum2=0;
    for(int i=1 ; i<=n ; i++){
        sum2+=i;
    }
    return sum2 ;
}

int main(){
    int n ;
    printf("Enter the number of terms :");
    scanf("%d",&n);
    printf("The sum of %d natural number is %d.\n",n , sum_1(n));
    printf("The sum of %d natural number is %d.\n",n , sum_2(n));

    return 0;
}
