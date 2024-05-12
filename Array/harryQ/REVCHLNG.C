#include <stdio.h>

void arrreversal(int *ptr, int n)
{
    printf("your array in normal format");
    for (int i = 0; i < n; i++)
    {
        printf("%d_", ptr[i]);
    }
    printf("\n your array in reverse format");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d_", ptr[i]);
    }
}

int main()
{

    int a;
    printf("how many elements do you want in the array_");
    scanf("%d", &a);
    int array[a];
    for (int i = 0; i < a; i++)
    {
        printf("give your element at index=%d_", i + 1);
        scanf("%d", &array[i]);
    }
    arrreversal(array, a);

    return 0;
}