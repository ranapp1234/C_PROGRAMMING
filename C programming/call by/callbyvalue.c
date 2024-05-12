#include <stdio.h>

// Swap functions that swaps
// two values
void swapx(int x, int y) // Formal Parameters
{
    int temp;
    
    temp = x;
    x = y;
    y = temp;
    printf("\n Inside Function:\nx = %d y = %d\n", x, y);
    return ;
}

// Main function
int main()
{
    int a = 10, b = 20;
    printf("before swap the value of a is %d and b is %d", a, b);
    // Calling the function to swap values of 'a' and 'b'
    // Pass by Values
    swapx(a, b); // Actual Parameters

    printf("In the Caller:\na = %d b = %d\n", a, b);

    return 0;
}
