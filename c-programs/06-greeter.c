/**
 * This program collects some information from the user, but it doesn't quite
 * work correctly.
 *
 * (1) Explain what's wrong with this code:
 *
 * *name and *age should be given memory (name can just be an array)
 *
 * (2) Fix the problem.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[100];
    int *age = malloc(sizeof(int));
    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Please enter your age: ");
    scanf("%d", age);
    printf("Hello, %s!\n", name);
    printf("You are %d years old, huh? Wow!\n", *age);

    return 0;
}

