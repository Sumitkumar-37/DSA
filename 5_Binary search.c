//  WAP in c for Binary search


#include <stdio.h>

// Function to perform binary search
int binarySearch(int array[], int size, int key) {
    int low = 0, high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        // Check if the key is present at mid
        if (array[mid] == key)
            return mid;
        
        // If the key is greater, ignore the left half
        if (array[mid] < key)
            low = mid + 1;
        
        // If the key is smaller, ignore the right half
        else
            high = mid - 1;
    }
    
    // If the key is not found
    return -1;
}

int main() {
    // int array[] = {2, 3, 4, 10, 40};
    // int size = sizeof(array) / sizeof(array[0]);
    // int key = 10;
    int key, n;
    printf("\nEnter the number of element\n");
    scanf("%d",&n);

    int array[n];
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }

    int size = sizeof(array)/ sizeof(array[0]);

    printf("\nEnter the element to be searched\n");
    scanf("%d",&key);
    
    int result = binarySearch(array, size, key);
    
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
