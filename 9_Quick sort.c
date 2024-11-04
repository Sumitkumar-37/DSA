// WAP in c For Quick sort

#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform the partition
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choosing the last element as pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j < high; j++) {
        // If the current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++;  // Increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }

    // Swap the pivot element with the element at i+1 position
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);  // Return the partition index
}

// Function to perform quick sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get the pivot index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after the partition
        quickSort(arr, low, pi - 1);  // Sort the left subarray
        quickSort(arr, pi + 1, high);  // Sort the right subarray
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
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int  arr[n];
    printf("\nenter %d elements is\n",n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    

    // int arr[] = {10, 7, 8, 9, 1, 5};  // Unsorted array
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: ");
    printArray(arr, size);

    // Perform quick sort
    quickSort(arr, 0, size - 1);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}
