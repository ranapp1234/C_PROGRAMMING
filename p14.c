/* Write a program that reads a 5*5 array of integers and then prints the row and the sum:

enter row1 : 4 5 3 2  2
enter row2 : 3 4 6 3  2
enter row3 : 3 4 5 6  7
enter row4 : 3 3 5 34 2
enter row5 : 9 8 7 6  5

row total:      16 18  25 47  35
column total:   22 24 26  51  18
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a[5][5] = {
        {4, 5, 3, 2, 2},
        {3, 4, 6, 3, 2},
        {3, 4, 5, 6, 7},
        {3, 3, 5, 34, 2},
        {9, 8, 7, 6, 5}};
    int i, j;
    int sum = 0;

    printf("Row total: \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", a[i][j]);
            sum += a[i][j];
        }
        printf(" %d \n", sum);

        sum = 0;
    }


    printf("Column total: \n");
     for (int j= 0; j<5 ;j++)
     {
        for (int i= 0; i<5; i++ )
        {
            printf("%d\t",a[i][j]);
            sum += a[i][j];
    
        }
        printf(" %d \n",sum);
      
        sum=0;
     }

    return 0;
}