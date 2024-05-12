#include <stdio.h>
void func1()
{
    printf("rana");
}

int main()
{
    int a;
    printf("enter your enrollment no:");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("you are 1st in the class\n");
        func1();
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

    printf(" finally you are graduated from ignou\n");
    return 0;
}