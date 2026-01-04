// Program 63: Write a program to sort an array using Bubble Sort.

// Bubble sort is based on the idea of repeatedly comparing pairs of adjacent elements and then 
// swapping their positions if they exist in the wrong order.
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
    int temp;
    for(int i =0 ; i<n ; i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
