#include <stdio.h>
int main()
{
    int a;
    char name[40];
    printf("Enter your age: ");
    scanf("%d", &a);
    
    printf("enter the name of the student:");
    
    // Using the address-of operator (&) to get the address of 'name
    scanf("%s",&name);
    // int marks;
    // char name[30];
    // printf("Enter student's name: ");
    // scanf("%s", name);
    // printf("Enter marks in Maths: ");
    // scanf("%d", &marks);
 
    printf("Hello %s! You age is  %d in 2024is!", name, a);
    return 0;
}




   
