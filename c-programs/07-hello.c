/**
 * This program tries to print a nice greeting but doesn't quite get there.
 *
 * (1) Explain what's wrong with this code:
 *
 * word1 is not good
 *  - 4 chars of memory given, but "Hello" is 5 chars long
 *  - Still needs a NUL terminator, so actually needs 6 chars in array
 *  - Just add a string literal instead of doing it letter by letter
 *      Also allows you to use implicit size
 *
 * (2) Fix the problem.
 */

#include <stdio.h>

int main(void)
{
    char word1[] = "Hello";

    char word2[] = "World";

    printf("%s\n", word1);
    printf("%s\n", word2);

    return 0;
}

