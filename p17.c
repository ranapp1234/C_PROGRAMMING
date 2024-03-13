/* find the minimum and maximum value of an array?
    Given an array, we have to find the minimum and maximum values in it. */

#include <stdio.h>
#include <stdlib.h>

void minmax(int arr[],int n, int *min, int *max)
{
    *min = *max = arr[0];
    int i;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main()
{
    int arr[] = {0, 93 , 3, 4,  1,  34, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min, max;
    
    for (int i = 0; i < n; i++)
    {
        printf("The element of array at index %d is: %d\n", i, arr[i]);
    }
    minmax(arr, n, &min, &max);
    printf("the value of minimum and maximum is: %d and %d", min, max);

    return 0;
}