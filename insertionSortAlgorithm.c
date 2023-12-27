#include<stdio.h>
int main(){
    int a[] = {8, 4, 1, 4, 3, 7};
     int n = sizeof(a) / sizeof(a[0]);
    int hole, value;
    for (int i = 1; i < n; i++){
         value = a[i];
         hole = i;
        while (hole>0 && a[hole-1]>value){
            a[hole] = a[hole - 1];
            hole--;
        }
        a[hole] = value;
    }
    printf("Sorted array : \n");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
// #include <stdio.h>

// Function to perform insertion sort on an array
// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         // Store the current element to be inserted into the sorted part of the array
//         int key = arr[i];
//         int j = i - 1;

//         // Move elements of the sorted part of the array that are greater than the key
//         // to one position ahead of their current position
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }

//         // Insert the key into its correct sorted position
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int a[] = {8, 4, 1, 4, 3, 7};
//     int n = sizeof(a) / sizeof(a[0]);

//     // Call the insertionSort function to sort the array
//     insertionSort(a, n);

//     // Print the sorted array
//     printf("Sorted array: \n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");

//     return 0;
// }
