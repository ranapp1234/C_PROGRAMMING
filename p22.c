/* 
Q. How to print the address of a variable?
 */

#include <stdio.h>
int main()
{
    int i =10;
    int *p= &i;
    printf("The address of a varaible i is %p", p);
    return 0;

}