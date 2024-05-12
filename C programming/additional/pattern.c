#include <stdio.h>

int main()
{
    int choice, n;

    // Choice
    printf("Choose which start pattern you want to print\n");
    printf("0) Triangular Star Pattern\n");
    printf("1) Reverse Triangular Star Pattern\n--> ");
    scanf("%d", &choice);

    // Accept n;
    printf("Enter number of lines you want to print the star pattern: ");
    scanf("%d", &n);

    switch (choice)
    {
    case 0:
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        break;

    case 1:
        for (int i = n; i >= 1; i--)
        {
            for (int j = 0; j < i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        break;

    default:
        printf("Invalid Input\n");
        break;
    }

    return 0;
}