/* find output*/

#include <stdio.h>
int i = 0, j = 1;
void f(int *p, int *q)
{
    p = q;
    *p = 2;
}

int main()
{
    f(&i, &j);
    printf("%d %d", i, j);
    return 0;
}
