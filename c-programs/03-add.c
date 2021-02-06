/**
 * This program adds up the contents of an array.
 *
 * (1) Explain what's wrong with this code:
 *
 * Arrays decay outside of their scope - sizeof(arr)
 *  in add becomes size of pointer to head of arr
 *  - instead, add length param, and set it = sizeof(nums) / sizeof(nums[0])
 *
 * 
 * (2) Fix the problem.
 */

# include <stdio.h>
# include <stdlib.h>

int add(int arr[], int length)
{
    int total = 0;
    int i;
    for (i = 0; i < length; ++i) {
        total += arr[i];
    }
    return total;
}

int main(void)
{
    // Note: result should be 1023
    int nums[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
    int result = add(nums, sizeof(nums)/sizeof(nums[0]));
    printf("Result: %d\n", result);

    return 0;
}

