#include <stdio.h>
void arrayRev(int *ptr)
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[6 - i];
        ptr[6 - i] = temp;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    for (int i = 0; i < 7; i++)
    {
        printf("Original array  at index %d is : %d \n", i, arr[i]);
    }
    printf("After Modified Array elements are as follows:\n");

    arrayRev(arr);

    for (int i = 0; i < 6; i++)
    {
        printf("reverse array  at index %d is : %d \n", i, arr[i]);
    }
    return 0;
}