// taking the size of arrray as we need and storing the array value into dynamic memory space.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("enter the size of array:");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d of this array\n: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n The value at index %d of this array is:%d \n", i, ptr[i]);
    }

free(ptr);

    return 0;
}