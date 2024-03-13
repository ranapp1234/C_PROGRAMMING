/*print one dimensional array*/
 #include<stdio.h>
 int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    printf("One Dimensional Array:\n");
    for(int i=0;i < 5; i++)
        printf("%d\t",arr[i]);  
    return 0;
 }