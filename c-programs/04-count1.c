/**
 * This program seems to print out different totals for the values in 'nums'
 * ...occasionally?
 *
 * (1) Explain what's wrong with this code:
 *
 * Total is uninitialized - total = undetermined num
 *  - instead, set it to 0
 * 
 * Each element in nums[1000] is unitialized - same issue as above happens
 *  - instead, set them to some number
 *  - can also just set first number, which automatically initalizes the rest
 *  of the values to 0
 *
 * (2) Fix the problem.
 */

#include <stdio.h>

int main(void)
{
    int nums[1000] = {69};
    int total = 0;

    int i;
    for (i = 0; i < 1000; ++i) {
        total += nums[i];
    }

    printf("The total is: %d (nice)\n", total);

    return 0;
}

