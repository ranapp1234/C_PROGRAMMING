/*  NEVER ever try to return the address of an automatic variable
*/


int *func()
{
    int i=0;
    return &i;
}
int main()
{
    int *p= func();
    printf("%d", *p);
}