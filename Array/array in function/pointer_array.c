// By declaring a pointer in the function to hold the base address of the array.
//        int func2(int *ptr)

#include <stdio.h>
void func2(int *ptr)
{
    for (int i = 0; i < 6; i++)
    {
        // printf("the value of index  %d is %d\n", i, ptr[i]);
        printf("the value of index  %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 565;
}

int main()
{
    int arr[] = {34, 3, 4, 5, 6, 78};
    printf("\nThe value of index 0 is  %d\n", arr[0]);
    func2(arr);
     func2(arr);
    return 0;
}