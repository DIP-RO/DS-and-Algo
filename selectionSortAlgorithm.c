//time complexity : O(n^2)
//space complexity : O(1)
#include <stdio.h>

int main() {
    int arr[] = {32, 44, 1, 2, 23, 44, 100, 7};
    int n = 8;  // Number of elements in the array

    // Outer loop to iterate over all elements except the last one
    for (int i = 0; i < n - 1; i++) {
        // Inner loop to find the minimum element's index
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap the minimum element with the current element (if they are different)
        if (min_index != i) {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
