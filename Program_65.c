// Program 65: Write a program to sort an array using Insertion Sort.
/*
Insertion sort algorithm arranges a list of elements in a particular order. In insertion sort 
algorithm, every iteration moves an element from unsorted portion to sorted portion until all 
the elements are sorted in the list. 
The insertion sort algorithm is performed using following steps... 
Step 1: Asume that first element in the list is in sorted portion of the list and remaining all 
elements are in unsorted portion. 
Step 2: Consider first element from the unsorted list and insert that element into the sorted list 
in order specified. 
Step 3: Repeat the above process until all the elements from the unsorted list are moved into 
the sorted list. 
*/
#include <stdio.h>

int main() {
    int n, key, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i =1 ; i<n;i++){
        int curr=arr[i];
        int j = i-1;
        while (j>=0&&arr[j]>curr){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
        
    }

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
