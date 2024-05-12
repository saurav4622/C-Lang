#include<stdio.h>

int main() {
    int arr[] = {5, 6, 8, 1, 2};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length - 1; i++) {
        int minIndex = i;

        // Find the index of the minimum element in the unsorted portion
        for (int j = i + 1; j < length; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first unsorted element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    // Print the sorted array
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
