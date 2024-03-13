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
int main()
{
    int arr[5][5];

    int index = sizeof(arr) / sizeof(arr[0]);
   
    printf("Enter elements for first row :\n");
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < index; j++)
        {
            scanf("%d", &arr[i][j]);
           
        }
    }

    printf("Enter elements for 2nd row :\n");
    for (int i = 1; i < 2; i++)
    {
        for (int j = 1; j < index; j++)
        {
            scanf("%d", &arr[i][j]);
       
        }
    }
   

    printf("Enter elements for 3rrd row :\n");
    for (int i = 2; i < 3; i++)
    {
        for (int j = 2; j < index; j++)
        {
            scanf("%d", &arr[i][j]);
            
        }
    }
   
    printf("Enter elements for 4th row :\n");
    for (int i = 3; i < 4; i++)
    {
        for (int j =3 ; j < index; j++)
        {
            scanf("%d", &arr[i][j]);
           
        }
    }
  

    printf("Enter elements for 5th row :\n");
    for (int i = 4; i < 5; i++)
    {
        for (int j = 4; j < index; j++)
        {
            scanf("%d", &arr[i][j]);
         
        }
    }



    printf("sum of row and colum value is :\n");
    for (int i = 0; i < index; i++)
    {

        for (int j = 0; j < index; j++)
        {
            int row_sum, col_sum;

            printf("%d\t", arr[i][j]);
           
        }
        printf("\n");
    }
}
