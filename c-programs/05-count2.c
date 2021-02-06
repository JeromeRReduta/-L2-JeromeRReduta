/**
 * Well, this one just segfaults after a bit.
 *
 * (1) Explain what's wrong with this code:
 *
 * The loop goes far, far past the boundaries of the array stuff
 *  Will overwrite other values not inside the array until it tries to
 *  edit some important file, at which point the file will segfault
 *  - instead, just do it based off length
 * 
 * (2) Fix the problem.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int stuff[100] = { 0 };
    printf("GREAT");
    /* Can you guess what the following does without running the program? */
    14[stuff + 1] = 12; // This doesn't work? Edit: Wait this doesn't seem to do anything


    int i;
    for (i = 0; i < sizeof(stuff) / sizeof(stuff[0]); ++i) {
        printf("%d: %d\n", i, stuff[i]);
    }

    return 0;
}

