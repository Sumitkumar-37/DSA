//  WAP in c for bucket sort

#include <stdio.h>
#include <stdlib.h>

// A function to sort an array using insertion sort (used to sort individual buckets)
void insertionSort(float arr[], int n)
{
    int i, j;
    float key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        // Move elements that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to perform bucket sort
void bucketSort(float arr[], int n)
{
    // Create n empty buckets
    float *buckets[n];
    int bucketCount[n];

    // Initialize each bucket
    for (int i = 0; i < n; i++)
    {
        buckets[i] = (float *)malloc(n * sizeof(float)); // Allocate memory for each bucket
        bucketCount[i] = 0;                              // Initialize count of each bucket to 0
    }

    // Put array elements into different buckets based on their value
    for (int i = 0; i < n; i++)
    {
        int bucketIndex = n * arr[i]; // Index in bucket
        buckets[bucketIndex][bucketCount[bucketIndex]++] = arr[i];
    }

    // Sort individual buckets using insertion sort
    for (int i = 0; i < n; i++)
    {
        insertionSort(buckets[i], bucketCount[i]);
    }

    // Concatenate all buckets into the original array
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < bucketCount[i]; j++)
        {
            arr[index++] = buckets[i][j];
        }
    }

    // Free allocated memory for each bucket
    for (int i = 0; i < n; i++)
    {
        free(buckets[i]);
    }
}

// Function to print the array
void printArray(float arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%f ", arr[i]);
    }
    printf("\n");
}

int main()
{
    // float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};  // Array with floating-point numbers between 0 and 1

    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    float arr[N];
    printf("Enter %d elements: ", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%f", &arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    // Perform bucket sort
    bucketSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
