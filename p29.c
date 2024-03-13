/* find the output of the program*/

#include<stdio.h>
int main()
{
    int a[][3]={1,2,3,4,5,6};
    int (*ptr)[3]=a;
    printf("%d and %d\n", (*ptr)[1], (*ptr)[2]);
    ++ptr;
    printf("%d and %d\n", (*ptr)[1], (*ptr)[2]);
    return 0;

}