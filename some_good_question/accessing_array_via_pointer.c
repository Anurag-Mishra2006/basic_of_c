#include <stdio.h>

int main() {
    int arr[] = {1,2,3,3,4,4,56,6,7,0,7,78,6};
    // int * ptr = arr;
    int n = sizeof(arr)/4;
    for(int i =0 ;i<n;i++){
    //    printf("%d ", arr[i]);  // Accessing array elements via pointer arithmetic
        printf("%d ", *(arr + i));  // Accessing array elements via pointer arithmetic.
        // printf("%d ", *(ptr + i));
    }
    return 0;
} 