/* Write a program to check wheather any of the digits in a number apperas more than onnc:
 ex-
      input = 23456
      output = no*/


#include <stdio.h>
#include <stdlib.h>
int main()
{

    int arr[10];      // intialy the size of array is define  as 10 so it by default  contains 0 at each index
    int N;
    printf("Enter the number:");
    scanf(" %d", &N);
    int rem;
    while (N > 0)
    {
        rem = N % 10;
        if (arr[rem] == 1)     // intialy array  index value is 0  so we compare it with 1 if 1 is present then break the loop other wise go to next statemnt
            break;
        arr[rem] = 1;         //taking rem value in index  as key and assigning it 1
        N /= 10;
    }
    if (N= N%10 > 0)

        printf("yes the value is repeated");
    else
        printf("no value is not repeate yet");

    return 0;
}