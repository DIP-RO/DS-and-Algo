#include <stdio.h>

void quickSort(int arr[], int first, int last) {
    int i, j, pivot, temp;
    if (first < last) {
        pivot = first;
        i = first;
        j = last;
        while (i < j) {
            while (arr[i] <= arr[pivot] && i < last)
                i++;
            while (arr[j] > arr[pivot])
                j--;
            if (i < j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        quickSort(arr, first, j - 1);
        quickSort(arr, j + 1, last);
    }
}

int findMax(int arr[], int n) {
    int max = arr[0]; // Initialize max with the first element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int n) {
    int min = arr[0]; // Initialize min with the first element
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int i, n, arr[100], j;

    printf("Enter the Array Size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Arr[]: {");
    for (i = 0; i < n; i++) {
        printf(" %d", arr[i]);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf(" }");

    printf("\nPick Value: ");
    scanf("%d", &j);

    quickSort(arr, 0, n - 1);

    printf("\nAscending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int minimum = findMin(arr, n);
    int maximum = findMax(arr, n);

    printf("\nLarge value: %d ", maximum);
    printf("Small value: %d\n", minimum);

    return 0;
}
