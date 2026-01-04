// Program 35: Write a program to find the maximum and minimum elements in an array.

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
    int max = arr[0] , min =arr[0];
    for(int i = 0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(int i = 0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("The maximum and minimum Terms in the array id %d and %d repectively . ",max,min);
    return 0;
}
