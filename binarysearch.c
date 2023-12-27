#include <stdio.h>
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid =( left +  left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
 int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1) {
        printf("Found at position %d\n", result);
    } else {
        printf("Not found\n");
    }
return 0;
}
