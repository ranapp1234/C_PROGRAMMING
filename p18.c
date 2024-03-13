/* Returning the pointers:
 Find the mid of the array*/

#include <stdio.h>
#include <stdlib.h>

int *findMid(int a[], int n)
{

    return &a[n / 2];
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int *mid = findMid(a, n);
    printf("Mid value is:%d", *mid);
    return 0;
}