/*what is the output of the following Ccode? Assume that the address of X is 2000 (in decimal) and an integer requires four bytes of memory.*/

#include <stdio.h>
int main()
{
    unsigned int x[4][3] = {{1, 2, 3}, {3, 3, 4}, 
    {3, 4, 34}, {34, 2, 3}};

    printf("%d, %u ,%u ", x+3 , *(x+3) , *(x+2)+3);
}