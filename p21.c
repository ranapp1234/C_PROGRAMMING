/* Q2. What is the output of the following program  */

#include<stdio.h>
   
void fun ( const int *p)
{
  *p = 0;

}
int main()
{
    const int i = 10;
    fun(&i);
    return 0;

}

/* output:
error message : Assignment of read-only location *p
   */