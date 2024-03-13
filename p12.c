/* Print Three Dimensional array */

#include <stdio.h>
int main()
{
    int arr[2][2][3] =
        {{{1, 2, 3}, {4, 5, 6}},
         {{9, 4, 3}, {5, 5, 3}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
                printf("%d ", arr[i][j][k]);
        }
    }
    return 0;
}