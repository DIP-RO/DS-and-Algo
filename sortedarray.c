#include <stdio.h>
int lastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
  while (low <= high) {
        int mid = low + (high - low) / 2;
          if (arr[mid] == target) {
            result = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    } return result;
}
int main() {
    int arr[] = {1, 2, 3,3, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Ar[]= {");
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
        if(i<n-1){
            printf(",");
        }
    }
    printf("}");
    printf("\nKey:");
    int target;
    scanf("%d", &target);
    int lastIndex = lastOccurrence(arr, n, target);
    
    if (lastIndex != -1)
        printf("Last occurrence of %d is at index %d\n", target, lastIndex);
    else
        printf("%d not found in the array\n", target);
    
    return 0;
}
