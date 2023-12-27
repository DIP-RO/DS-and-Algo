#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {202, 104, 304, 223, 453, 123};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 223; // Set the target value here

    int result = linearSearch(arr, n, target);

    if (result != -1) {
        printf("Position = %d Row\n", result);
    } else {
        printf("Product not available\n");
    }

    return 0;
}
