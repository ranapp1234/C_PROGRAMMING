#include <stdio.h>

int main()
{
    int a, b, sum = 0;
    printf("\nenter the 1st value a:\n ");
    scanf("%d", &a);
    
   
    printf("\nenter the 2nd value b: \n");
    scanf("%d", &b);
    sum=a+b;
    printf("\nSum of the value of a and b is: %d\n", sum);

    return 0;
}