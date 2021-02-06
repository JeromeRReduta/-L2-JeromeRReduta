/**
 * This awesome code example was taken from the book 'Mastering C Pointers,'
 * one of the famously bad resources on learning C. It was trying to demonstrate
 * how to print 'BNGULAR'... with pointers...? Maybe?
 *
 * HINT: it is extremely bad practice to drop random ASCII values in your code.
 * There is a far better way to do it.
 *
 * (1) Explain what's wrong with this code:
 *
 * *a is never given memory - should use malloc or char array
 * 
 * Regardless of whether a is a pointer or a char[], can't just assign a 
 *   to a string - have to initialize it that way or change it letter by letter I guess
 * 
 * why use 66 instead of 'B' - not necessary but no
 * 
 * (2) Fix the problem.
 */

#include <stdio.h>

int main(void)
{
     char a[20] = "ANGULAR";
     *a = 'B';
     printf("%s\n", a);
     return 0;
}
