// Program 130 : Write a C program to search an element in an array and terminate the loop immediately when the element is found using break.

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            printf("Element found at index %d", i);
            break;
        }
    }
    return 0;
}
