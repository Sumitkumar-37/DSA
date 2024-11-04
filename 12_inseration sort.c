//  WAP in c for inseration sort

#include <stdio.h>

// Function to perform insertion sort
void insertionSort(int arr[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i]; // Current element to be positioned
        j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; // Place key in its correct position
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
    // int arr[] = {12, 11, 13, 5, 6}; // Unsorted array
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted  array: ");

    printArray(arr, size);

    // Perform insertion sort
    insertionSort(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}
