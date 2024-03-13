#include <stdio.h>
int main()
{
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("enter the value of  %d element of the arry\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n", i, marks[i]);
        scanf("%d", &marks[i]);
    }
    return 0;
}