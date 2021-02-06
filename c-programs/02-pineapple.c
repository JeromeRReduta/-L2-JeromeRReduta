/**
 * This program features an amazing function that appends "Pineapple" to any
 * string it is given. Wow. The only issue is that it doesn't actually work, and
 * it also doesn't really follow idiomatic C conventions when it comes to
 * returning the result string.
 *
 * (1) Explain what's wrong with this code:
 *
 * pointers should be set to memory addresses (i.e. malloc or arrays), not string literals
 * 
 * Warning from compiler - function shouldn't return address of a local variable
 *
 * char buf[] is unitialized - instead, can init w/ char buf[128] = ""
 * 
 * (2) Fix the problem.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *pineapple(char *input) {
    char buf[128] = "";
    strcpy(buf, input);

    printf("BUF:\t%s\n", buf);

    strcat(buf, "Pineapple");
    strcpy(input, buf);

    return input;
}

int main(void)
{
    
    char str[20] = "Pen";
    char *result = pineapple(str);


    printf("%s\n", result);

    return 0;
}

