/*use size of operator with array
 number of elements = size of whole array / size of 1 array element

*/
#include<stdio.h>
 int main()
 { 
    int array[]={1,3,4,5,5,5,56,55,5,4,4,3,3,3,4,4,5,5,5,4,433,3,43,4,4,5,55,4,4,4,3,33,3,3,4,4,4,4,4,4,44,4,3,3,3,3,3,3,3,3,3,3,3,3,4,4,4,5,5,5,5,6,6,6,6,6,6,7,7,88,8,9,9,9,9,9,9,8,7,7,6,6,5,5,5,5,54,4,4,44,5,6,6,76,7, 23,23,23,34,34};
    printf("%d", sizeof(array)/sizeof(array[0]));
 }

