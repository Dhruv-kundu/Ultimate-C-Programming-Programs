// Program 31: Write a program to find the average of elements in an array.

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
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    float sum_element = (float)sum;
    float average =sum_element/n;
    printf("The Average of the elements of the array is %f.",average);
    return 0;
}
