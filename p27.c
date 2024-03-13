/*  How to access the second last element of the above array using  pointer arihmetic?
array ={12,23,3,87,3,32,4,332}
*/

#include <stdio.h>
int main()
{
    int arr[2][2][2] = {{{1, 2}, {2, 3}}, {{2, 3}, {4, 3}}};
    int *p;

    p = &arr[0][0][0];                               // set p to point to the first element of the array
    int length = sizeof(arr) / sizeof(arr[0][0][0]); // calculate the total number of elements in the array
    p = p + length - 2;                              // move p to point to the second last element of the array
    printf("The second last element is: %d\n", *p);  // dereference p to get the value of the second last element
    return 0;
}
