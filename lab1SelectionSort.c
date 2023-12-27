#include<stdio.h>
#include<math.h>
int max(int arr[100],int n)
{
    int max = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>arr[0])
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[100],i,j,n,min_idx,temp;
    printf("Enter Array Size : ");
    scanf("%d", &n);
    if(n)
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Ar[] = {");
    for (i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
        if (i < n - 1)
        {
            printf(",");
        }
    }
    printf(" }");
    for(i=0; i<n-1; i++)
    {
        min_idx = i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx =j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    printf("\nSorted data: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);

    }
    int power =pow(arr[1],max(arr,n));
    printf("\nResult %d^%d = %d",arr[1],max(arr,n),power);
}
