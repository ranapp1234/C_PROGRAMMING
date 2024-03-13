/*What is the output of the following program?
 */

#include <stdio.h>
int main()
{

    int a[] = {5, 16, 7, 89, 45, 32, 23, 10};
    int *p = &a[1], *q = &a[5];

    printf("%d \n ", *(p + 3));
    printf("%d \n", *(q - 3));
    printf("%d \n", q - p);
    printf("%d \n", p < q);
    printf("%d \n", p > q);

    return 0;
}

/*It declares an integer array a[] with 8 elements, initialized with the values {5, 16, 7, 89, 45, 32, 23, 10}.
It declares two integer pointers, p and q, and initializes them to point to the second and sixth elements of the array a, respectively. Specifically, p points to a[1] (which has the value 16), and q points to a[5] (which has the value 32).
It prints out the value of the element pointed to by p + 3. Since p points to a[1], p + 3 points to a[4], which has the value 45.
It prints out the value of the element pointed to by q - 3. Since q points to a[5], q - 3 points to a[2], which has the value 7.
It prints out the difference between the addresses stored in q and p. This will give the number of elements between the two pointers. Since q points to a[5] and p points to a[1], the difference is 4.
It prints out the result of the comparison p < q, which is 1 (true), since p points to an earlier element in the array than q.
It prints out the result of the comparison p > q, which is 0 (false), since p does not point to a later element in the array than q.
The program then returns 0 to indicate successful execution.*/