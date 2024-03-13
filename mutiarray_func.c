
// access multi dmaensional array in function

#include <stdio.h>

void func3(int arr[2][4])
{

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of %d %d element of the array is %d\n", i, j, arr[i][j]);
        }
    }
}
int main()
{
    int arr[2][4] = {{3, 43, 22, 3}, {2, 673, 44, 5}};

    func3(arr);

    return 0;
}