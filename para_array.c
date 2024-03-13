// By declaring array as a parameter in the function
//         int func1(int arr[])

#include <stdio.h>
int func1(int arr[])
{
    for (int i = 0; i < 6; i++)
    {
        printf("the value of index  %d is %d\n", i, arr[i]);
    }

    return 0;
}

int main()
{    int n;

    int arr[] = {34, 3, 4, 5, 6, 78};
    
     for (int i = 0; i < 6; i++)
    {
        printf("the value of index  %d is %d\n", i, arr[i]);
    }
    // func1(arr);
    return 0;
}