/*Matrix multiplication
 1 matrix (m*n)[3][4]
 2 matrix (n*m)[4][2]

 possibilty  of multiplying matrices is only when the number of columns in first matrix is equal to the number of raw in 2nd matrix.

 And our resulted matrix is -  [3][2]

*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sum;
    /*1 matrix is order of 2*3  and
    2nd matrix is order of 3*2 */

    int a[3][4], b[4][2], result[3][2];

    printf("Enter element of the first matrix \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter element of the second matrix \n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                // calculate the result
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    printf("Result of the matrix is:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // print the result ant matrix elements.
            printf(" %d \t", result[i][j]);
            sum = 0;
        }
        printf("\n");
    }

    return 0;
}


/* TO SHOW THE ACTUAL OUTPUT CLICK ON THIS LINK- https://drive.google.com/file/d/1nzljd1pZnl9WilEwhwZLhRS1WwHYoZSp/view?usp=sharing  */
