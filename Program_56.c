// Program 56: Write a program to count even and odd elements in an array.
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
    int count_odd = 0,count_even=0;
    for(int i =0;i<n;i++){
        if(arr[i]%2==0)
            count_even++;
        else
            count_odd++;  
    }
    printf("The number of even and odd elements in the array is %d and %d repectively .",count_even,count_odd);
    return 0;
}
