// take input from the user and ask to choose 0 for triangular star pattern and 1 for reversed triangular  star pattern.
// then print the pattern accordingly

#include <stdio.h>
void triangular(int numa)
{  
    while (numa != 1)
    {
        printf("you enter the value %d  i.e result is:\n", numa);
        switch (numa)
        {
        case 0:
            printf("* \n");

        case 1:
            printf("* * \n");

        case 2:
            printf("* * * \n");

        case 3:

            printf("* * * * \n");

        case 4:
            printf("* * * * * \n");

        case 5:
            printf("* * * * * * \n");
            numa++;
            break;
           
        }
    }
}

int reverse_triangular(int numb)
{
    if (numb == 0)
    {
        return 0;
    }
    else
    {
        printf("you enter the value %d  i.e result is:\n", numb);
        for (int i = 5; i >= numb; --i)
        {

            switch (i)
            {
            case 5:
                printf("* * * * * \n");
                break;
            case 4:
                printf("* * * * \n");
                break;
            case 3:
                printf("* * * \n");
                break;
            case 2:
                printf("* * \n");
                break;
            case 1:
                printf("* \n");
                break;
            }
        }
    }
    return 0;
}

int main()
{

    int a, b;
    printf("enter 0 for triangular star pattern and 1 for reversed triangular star pattern:\n");
    scanf("%d",&a);
    triangular(a);
    reverse_triangular(a);
    return 0;
}