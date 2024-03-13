/*  simple example -
print the sum of array value by usnig function call
*/

int add(int *b, int len)     //b is nothing but is a[].
{
    int sum = 0, i ;
    for (int i=0; i<len; i++) 
    sum += b[i];
     return sum;
}
#include<stdio.h>
int main()
{
int a[]= {1,3,3,43,4};
int len = sizeof(a)/sizeof(a[0]);
printf("%d", add(a, len));
}
