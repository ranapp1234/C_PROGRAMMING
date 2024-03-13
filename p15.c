// Q. write c program of matrix multiplication[3][3]

/*in order to multiply two matrices,
must follow this rule-
#columns of 1st mayrix = #row of 2nd matrix */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j, k, sum;
    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of second matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }
    }

    printf("Reuslt of matrix is:-\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
