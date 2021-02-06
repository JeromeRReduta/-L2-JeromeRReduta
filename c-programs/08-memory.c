/**
 * This program tokenizes a string and prints each word in the string (separated
 * by a space character) on a new line. Unfortunately, it has two big issues.
 *
 * (1) Explain what's wrong with this code:
 *
 * VS Code is telling me the "Grace" line is bigger than the space we've allocated in line
 *
 * Strsep uses a double pointer
 *  Prof. Malensek says that w/ double pointers (esp w/ strtok or strsep):
 *      Divides string into substrings
 *      Does stuff to start of string
 *      Moves pointer to start of substring
 *      Repeats w/ start of substring
 * 
 * So if you use strsep repeatedly on line, then try to free line,
 *      you're only freeing the last substring
 *      Instead, have a temp pointer for strsep, and then free both temp and line when done
 * 
 * (2) Fix the problem.
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *line = malloc(sizeof(char) * 75);
    char *temp = line;
    strcpy(line, "Well, Grace she's gone, she's a half-written poem");


    while (true) {
        
        char *token = strsep(&temp, " ");
        if (token == NULL) {
            break;
        }
        printf("%s\n", token);
    }

    free(line);
    free(temp);
    line = NULL;
    
    return 0;
}

