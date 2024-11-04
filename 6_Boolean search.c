//  WAP in c for Boolean search

#include <stdio.h>

// Function to perform Boolean sort
void booleanSort(int arr[], int size) {
    int count_zeros = 0;

    // Count the number of 0s in the array
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            count_zeros++;
        }
    }

    // Fill the array with 0s for the first 'count_zeros' positions
    for (int i = 0; i < count_zeros; i++) {
        arr[i] = 0;
    }

    // Fill the rest of the array with 1s
    for (int i = count_zeros; i < size; i++) {
        arr[i] = 1;
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

    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements %d : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    // int arr[] = {1, 0, 1, 0, 1, 0, 0, 1, 1}; // Unsorted array of 0s and 1s
    int size = sizeof(arr) / sizeof(arr[0]);

    
    printf("Original array: ");
    printArray(arr, size);

    // Perform Boolean sort
    booleanSort(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}
