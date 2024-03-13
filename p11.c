/*print Two-dimensional array*/

#include<stdio.h>
 int main() {
    int arr[2][3] = {{10, 20,3}, {23,3,3}};
    printf("Two Dimensional Array:\n");
    for(int i=0;i <2; i++)
    { 
        for (int  j = 0; j <3; j++)
        {
            printf("%d\t",arr[i][j]);  
        }
        printf("\n");
    }
    return 0;
 }