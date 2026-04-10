#include <stdio.h>

void selectionSort(int arr[], int n) {
    //write your code here...
    int i, j, max_idx, temp;

    // Move the boundary of the unsorted subarray one by one
    for (i = 0; i < n - 1; i++) {
        
        // Find the maximum element in the unsorted portion
        max_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }

        // Swap the found maximum element with the first element of the unsorted part
        if (max_idx != i) {
            temp = arr[max_idx];
            arr[max_idx] = arr[i];
            arr[i] = temp;
        }
    }

    
    
    
}

int main() {
    int n;

    // Input number of elements in the array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array in descending order using selection sort
    selectionSort(arr, n);

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
