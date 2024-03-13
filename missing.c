#include <stdio.h>
int missingNumber(int *nums, int numsSize)
{
    int ans = 0;
    for (int i = 0; i <= numsSize; i++)
    {
        ans = ans ^ i;
    }
    for (int i = 0; i < numsSize; i++)
    {
        ans = ans ^ nums[i];
    }
    return ans;
}

int main()
{
    int nums[] = {0, 1, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int missingNum = missingNumber(nums, numsSize);
    printf("Missing number is: %d\n", missingNum);
    return 0;
}