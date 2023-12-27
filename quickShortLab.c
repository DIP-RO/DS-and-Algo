#include <stdio.h>

void quickSort(int arr[], int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;

        while (i < j)
        {
            while (arr[i] <= arr[pivot] && i < last)
                i++;
            while (arr[j] > arr[pivot])
                j--;
            if (i < j)
            {
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
int main()
{
    int t, n, i, j, arr[100];
    printf("Test Case: ");
    scanf("%d", &t);
    for (j = 0; j < t; j++)
    {
        printf("Enter array Size: ");
        scanf("%d", &n); // Read the size of the array
        printf("Enter array elements: ");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]); // Read the array elements
        }
        printf("Array[]: {");
        for (i = 0; i < n; i++)
        {
            printf(" %d", arr[i]);
            if (i < n - 1)
            {
                printf(",");
            }
        }
        printf(" }");
        quickSort(arr, 0, n - 1);
        printf("\nAfter Sorting:\n");
        printf("Array[]: {");
        for (i = 0; i < n; i++)
        {
            printf(" %d", arr[i]);
            if (i < n - 1)
            {
                printf(",");
            }
        }
        printf(" }\n");
    }
return 0;
}
