/* Q. consider the following two statements
   int *p = &i;
   p = &i;
   first statement is the declaration and second is simple assignment statement.
   why isn't in second statement, p is preceded by *symbol?
   */



#include<stdio.h>
int main()
{

    int i = 13;
    int *p = &i;
     
    printf("the value of i is %d", p);
// p = &i;
    return 0;
}

