//  WAP in c for selection sort

#include <stdio.h>

// Function to perform selection sort
void selectionSort(int arr[], int size) {
    int i, j, min_idx;

    // One by one move the boundary of the unsorted subarray
    for (i = 0; i < size - 1; i++) {
        // Find the minimum element in the unsorted part
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // int arr[] = {64, 25, 12, 22, 11}; // Unsorted array

    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter %d elements: ", n);
    for(int  i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    // Perform selection sort
    selectionSort(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}
