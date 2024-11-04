// WAP in c for count sort

#include <stdio.h>
#include <string.h>

// Function to perform counting sort
void countSort(int arr[], int size) {
    // Find the maximum element in the array
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Create a count array to store the count of each unique element
    int count[max + 1];
    memset(count, 0, sizeof(count)); // Initialize count array with zeros

    // Store the count of each element in the array
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    // Update the input array with sorted elements
    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
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
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
  //  int arr[] = {4, 2, 2, 8, 3, 3, 1};  // Unsorted array
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: ");
    printArray(arr, size);

    // Perform counting sort
    countSort(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}
