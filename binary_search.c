#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
     
    int left = 0, right = n - 1;
    
    while (left <= right) {
        // Correct way to calculate mid to avoid (left + right) overflow
        int mid = left + (right - left) / 2;
        
        // Check if x is present at mid
        if (arr[mid] == x)  // Fixed syntax here
            return mid;
            
        // If x is greater, ignore left half
        if (arr[mid] < x)
            left = mid + 1;
        // If x is smaller, ignore right half
        else
            right = mid - 1;
    }
    
    // If we reach here, the element was not present
    return -1;
	  
        
        
        
    }
    
    return -1;
}

int main() {
    int n, x;
    
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &x);
    
    int result = binarySearch(arr, n, x);
    
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
