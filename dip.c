#include <stdio.h>
int main()
{
    int arr[5], j, i, temp;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = arr[i];
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d", &arr[i]);
    }
    return 0;
}