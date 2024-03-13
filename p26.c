/*  use pointer and dispay a 2 dimensional array of arr[3][3]*/

#include <stdio.h>
int main()
{
    int arr[2][2] = {{1, 2}, {2, 3}};
    int *p;
    p = &arr[2][2];

    for (p = &arr[0][0]; p <= &arr[2-1][2-1]; p++)
    {
        printf("the value of array is %d\n", *p);
    }
    return 0;
}