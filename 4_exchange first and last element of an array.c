// 2. WAP in C to exchange first and last element of an array.
// WAP in C to exchange first to last element and second  to last second element of an array.
#include <stdio.h>

void swapElements(int arr[], int size) {
    // Swapping the first and last elements
    int temp = arr[0];
    arr[0] = arr[size - 1];
    arr[size - 1] = temp;

    // Swapping the second and second-last elements
    if (size > 1) {
        temp = arr[1];
        arr[1] = arr[size - 2];
        arr[size - 2] = temp;
    }
}

int main() {
    int n, i;

    // Taking the array size input
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Taking array elements input
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calling the function to swap elements
    swapElements(arr, n);

    // Displaying the modified array
    printf("Array after swapping:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
