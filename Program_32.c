// Program 32: Write a program to reverse an array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element at index %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    //Reversing an array 
    for(int i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    //Reversing an array
    for(int i=0;i<n;i++){
        printf("%d\t",arr[n-i-1]);
    }
    return 0;
}
