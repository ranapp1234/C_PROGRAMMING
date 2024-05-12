// write the code where you have to gift the student accoding to pass and fail in the subjects
// // maths and science - 45
// // science - 15
// // maths - 15

// // print the type of gift you are giving to them

#include <stdio.h>

int main()
{
    int a;
    printf("enter 5 if you passed in both subjet(math and science)\n or enter 3 if you passed in either one subjet\n");
    scanf("%d", &a);
    printf("you choose the value %d\n", a);
    if (a==5)
    {
        printf("you get the reward as a gift (passed in math and science)- rs. 450");
    }
    else if (a==3)
    {
        printf("you get the reward as a gift (passe in one subject)- rs. 150");
    }
    else
    {
        printf("your result is not valid please try again");
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int age;
//     printf("Enter your age\n");

//     scanf("%d", &age);
//     printf("You have entered %d as your age\n", age);
//     if (age>=18) {
//         printf("You can vote!");
//     }

//     else if(age>=10)
//     {
//         printf("You are between 10 to 18 and you can vote for kids");
//     }

//     else if(age>=3)
//     {
//         printf("You are between 3 to 10 and you can vote for babies");
//     }

//     else{
//         printf("You cannot vote!");
//     }

//     return 0;
// }


