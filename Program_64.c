// Program 64: Write a program to sort an array using Selection Sort.
/* Selection Sort algorithm is used to arrange a list of elements in a particular order (Ascending 
or Descending). In selection sort, the first element in the list is selected and it is compared 
repeatedly with remaining all the elements in the list. If any element is smaller than the 
selected element (for Ascending order), then both are swapped. Then we select the element at 
second position in the list and it is compared with remaining all elements in the list. If any 
element is smaller than the selected element, then both are swapped. This procedure is 
repeated till the entire list is sorted. */
// wrong descending
// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter the number of terms : ");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         printf("Enter the element at index %d : ",i);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
//     int min , temp;
//     for(int i =0;i<n;i++){
//         min=i;
//         for(int j =0;j<n;j++){
//             if (arr[j]<arr[min]){
//                 temp=arr[min];
//                 arr[min]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     printf("Sorted array:\n");
//     for(int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     return 0;
// }

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);

    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i);
        scanf("%d",&arr[i]);
    }

    int min, temp;
    for(int i = 0; i < n - 1; i++){
        min = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
