#include<stdio.h>
int main()
{
    int arr[100],i,j,n,min_idx,temp,t;
    printf("Enter Array Size : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array[] = {");
    for (i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
        if (i < n - 1)
        {
            printf(",");
        }
    }
    printf(" }");
    printf("\nt = ");
    scanf("%d",&t);
    for(int k = 0; k<t; k++)
    {
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
         if(i==k)break;
        }
    }

    printf("\nAfter %d time array : ",t);
    for (i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
}
