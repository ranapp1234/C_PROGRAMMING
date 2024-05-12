/* 2Q. Command line calculator
You have to create a command line utility to -
ADD / SUSTRACT/ DIVIDE / MULTIPLY
two numbers first command line argument of your c program must be the operation.
The next arguement being the two numbers, for Example-
1 >> Command.c ADD 23 34
>> 57
2>> commmad.c DIVIDE 45/9
>> 5

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);
    printf("operation %s\n", operation);
    printf("num1 is  %d\n", num1);
    printf("num2 is  %d\n", num2);

    if (strcmp(operation, "add") == 0)
    {
        printf("%d\n", num1 + num2);
    }
    else if (strcmp(operation, "substract") == 0)
    {
        printf("%d\n", num1 - num2);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("%d\n", num1 * num2);
    }
    else if (strcmp(operation, "divide") == 0)
    {
        printf("%d\n", num1 / num2);
    }
    return 0;
}