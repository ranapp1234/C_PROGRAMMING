#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num)
{
    int temp = num;
    int rev=0;          // 1. 0 to 7  2. 7 to 77  3. 77 to 778
    while (num != 0)
    {
        rev = rev * 10 + num % 10; // add the last digit to reverse of number
        num /= 10;                 // remove the last digit from number
    }
    if (temp == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a palindrome or not \n");
    scanf("%d", &number);
    // Your task is to implement this function

    if (isPalindrome(number))
    {
        printf("This number is a palindrome\n");
    }
    else
    {
        printf("This number is not a palindrome\n");
    }

    return 0;
}
