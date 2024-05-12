#include <stdio.h>
int main()
{
    int a, b;
    printf("enter your enrollment no:");
    scanf("%d", &a);
    printf("enter your age:");
    scanf("%d", &b);

    switch (a)
    {
    case 1:
    {
        printf("you are 1st in the class \n");
        switch (b)
        {
        case 23:
            printf("your percentage in cgpa is- 7.5\n");
            break;
        }
    }

    break;
    case 2:
        printf("you are 2nd in the class\n ");
        break;

    case 3:
        printf("you are 3rd in the class\n");
        break;
    default:
        printf("you are passed congrast!");
    }

    printf("finally you are graduated from ignou 2024\n");
    return 0;
}