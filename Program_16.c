// Program 16: Write a program to find the sum of first n natural numbers.
#include<stdio.h>

int main(){
    int n ;
    printf("Enter the number of terms :");
    scanf("%d",&n);
    //Method 1 
    float a = n;
    float sum = (a*(a+1))/ 2;
    printf("The sum of %d natural number is %f.\n",n , sum);
    //Method 2
    int sum2=0;
    for(int i=1 ; i<=n ; i++){
        sum2+=i;
    }
    printf("The sum of %d natural number is %d.\n",n , sum2);

    return 0;
}
